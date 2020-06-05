#!/usr/bin/env python3
# This file is derived from the work of
# Francesco Conti <f.conti@unibo.it>
# https://github.com/pulp-platform/bigpulp/blob/master/ipstools_cfg.py

REPOSITORY = "github.com/SickScan/CID-Tools.git"
CHECKOUT_DIR = '../src/CID-Tools'
COMMIT = '' #leave this blank to checkout HEAD


import argparse
import sys,os,subprocess

class tcolors:
    OK      = '\033[92m'
    WARNING = '\033[93m'
    ERROR   = '\033[91m'
    ENDC    = '\033[0m'

def execute(cmd, silent=False):
    if silent:
        devnull = open(os.devnull, 'wb')
        stdout = devnull
    else:
        stdout = None
    ret = subprocess.call(cmd.split(), stdout=stdout)
    if silent:
        devnull.close()
    return ret

def execute_out(cmd, silent=False):
    p = subprocess.Popen(cmd.split(), stdout=subprocess.PIPE)
    out, err = p.communicate()
    return out


if __name__ == "__main__":
    argParser = argparse.ArgumentParser(description='Checkout CID tools')

    argParser.add_argument('-u','--user', help='Github user with access rights for th CID Tools repo', required=True)
    argParser.add_argument('-p','--password',  help='Password', required=True)

    
    

    args = argParser.parse_args()
    currentWorkDir = os.getcwd()


    if not os.path.exists(CHECKOUT_DIR):
        execute("git clone https://{}:{}@{} {}".format(args.user, args.password, REPOSITORY, CHECKOUT_DIR))
        
        
    elif not os.path.isdir(CHECKOUT_DIR):
        sys.exit("Error: '{}' exists but is not a directory!".format(CHECKOUT_DIR))
    cwd = os.getcwd()
    os.chdir(CHECKOUT_DIR)
    execute("git fetch --all", silent=True)
    if 0 != len(COMMIT):
        execute("git checkout {}".format(COMMIT))

    os.chdir(cwd)
