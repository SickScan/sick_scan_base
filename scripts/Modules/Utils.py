

import sys
import os
import glob
import logging
import shutil
import hashlib
from pathlib import Path
from subprocess import *

logFormatter = logging.Formatter("%(asctime)s [%(levelname)-5.5s]  %(message)s",datefmt='%Y-%m-%d %H:%M:%S')
rootLogger = logging.getLogger()
rootLogger.setLevel(logging.DEBUG)
consoleHandler = logging.StreamHandler()
consoleHandler.setFormatter(logFormatter)
rootLogger.addHandler(consoleHandler)
logger = logging.getLogger()



def run_cmd(cmd, workdir):
  p = Popen(cmd, stdout=PIPE, stderr=STDOUT, bufsize=1,  cwd=workdir)

  for line in iter(p.stdout.readline, b''):
    tmp = str(line)
    if tmp.endswith("\\r\\n'"):
      logger.info(tmp[2:len(tmp)-5])
    elif tmp.endswith("\\r\\n\""):
      logger.info(tmp[2:len(tmp)-5])
    else:
      logger.info(tmp[2:len(tmp)-3])
  p.stdout.close()
  p.wait()

