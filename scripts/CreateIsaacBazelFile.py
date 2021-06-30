
from Modules.Utils import *


def WriteBazelBuildFile(soucesC,headersC, soucesCPP,headersCPP, buildFilePath, includePaths):
  with open(buildFilePath + "/ssbl.BUILD", 'w') as f:
  
    f.write("\"\"\"\n")
    f.write("Copyright 2019, SICK AG, Waldkirch\n\n")

    f.write("Licensed under the Apache License, Version 2.0 (the \"License\");\n")
    f.write("you may not use this file except in compliance with the License.\n")
    f.write("You may obtain a copy of the License at\n")

    f.write("http ://www.apache.org/licenses/LICENSE-2.0\n\n")

    f.write("Unless required by applicable law or agreed to in writing, software\n")
    f.write("distributed under the License is distributed on an \"AS IS\" BASIS,\n")
    f.write("WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n")
    f.write("See the License for the specific language governing permissions and\n")
    f.write("limitations under the License.\n")
    f.write("\"\"\"\n\n")
  
    if len(soucesC) != 0:
      f.write("cc_library(\n")
      f.write("\tname=\"ssblc\",\n")
      f.write("\tsrcs = [\n")
      for n in range(len(soucesC)):
        f.write("\t\t\"{0}\",\n".format(str(soucesC[n])))
      f.write("\t],\n")

      f.write("\thdrs = [\n")
      for n in range(len(headersC)):
        f.write("\t\t\"{0}\",\n".format(str(headersC[n])))
      f.write("\t],\n")
      f.write("\tcopts = [\n")
      for n in range(len(includePaths)):
        f.write("\t\t\"-I{0}\",\n".format(str(includePaths[n])))
      f.write("\t],\n")
      f.write("\tlinkopts = [\"-pthread\"],\n")
      f.write(")\n\n")
  
  
    f.write("cc_library(\n")
    f.write("\tname=\"ssbl\",\n")
    f.write("\tsrcs = [\n")
    for n in range(len(soucesCPP)):
      f.write("\t\t\"{0}\",\n".format(str(soucesCPP[n])))
    f.write("\t],\n")

    f.write("\thdrs = [\n")
    for n in range(len(headersCPP)):
      f.write("\t\t\"{0}\",\n".format(str(headersCPP[n])))
    f.write("\t],\n")
    f.write("\tcopts = [\n")
    for n in range(len(includePaths)):
      f.write("\t\t\"-I{0}\",\n".format(str(includePaths[n])))
    f.write("\t\t\"-std=c++14\"\n")
    f.write("\t],\n")
    f.write("\tlinkopts = [\"-pthread\"],\n")
    f.write("\tvisibility = [\"//visibility:public\"],\n")
    if len(soucesC) != 0:
      f.write("\tdeps = [\":ssblc\"],\n")

    f.write(")\n")


if __name__ == "__main__":
  scriptLocation = os.path.dirname(os.path.abspath(__file__))
  buildFilePath = scriptLocation

  searchFolders = ["include","Components/API","Components/AutoIp", "Components/Base"]

  gSourcesC = []
  gHeadersC = []
  gSourcesCPP = []
  gHeadersCPP = []
  gIncludePaths = []
  gIncludePaths.append("external/com_sickag_ssbl/Components")
  gIncludePaths.append("external/com_sickag_ssbl/include")

  
  for folder in range(len(searchFolders)):
    searchPath = scriptLocation+ "/../src/Library/" + searchFolders[folder]
   
    for file in Path(searchPath).rglob('**/*.c'):
      fs = str(file)
      fs = fs.replace("\\", "/")
      fs = fs[fs.find("../src/Library/")+len("../src/Library/"):]
      gSourcesC.append(fs)
    for file in Path(searchPath).rglob('**/*.h'):
      fs = str(file)
      fs = fs.replace("\\", "/")
      fs = fs[fs.find("../src/Library/")+len("../src/Library/"):]
      gHeadersCPP.append(fs)
  
  gSourcesC = list(filter(lambda s: (s.find("Windows")==-1) and (s.find("Zephyr")==-1), gSourcesC))

  for cfile in gSourcesC:
    cfile = cfile[cfile.rfind("/")+1:-2]
    for hfile in gHeadersCPP:
      hhfile = hfile[hfile.rfind("/")+1:-2]
      if hhfile == cfile:
        gHeadersC.append(hfile)
  for hfile in gHeadersC:
    print(hfile)
  
  for folder in range(len(searchFolders)):
    searchPath = scriptLocation+ "/../src/Library/" + searchFolders[folder]
    for file in Path(searchPath).rglob('**/*.cpp'):
      fs = str(file)
      fs = fs.replace("\\", "/")
      
      fs = fs[fs.find("../src/Library/")+len("../src/Library/"):]
      print (fs)
      gSourcesCPP.append(fs)


  gSourcesCPP = list(filter(lambda s: (s.find("Windows")==-1) and (s.find("Zephyr")==-1), gSourcesCPP))




  WriteBazelBuildFile(gSourcesC, gHeadersC,gSourcesCPP, gHeadersCPP,buildFilePath, gIncludePaths)
  #for f in range(len(gSourcesCPP)):
  #  print(str(gSourcesCPP[f]))
