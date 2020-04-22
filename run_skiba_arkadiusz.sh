#!/bin/bash

case "$1" in
   "clone")
	 git clone https://github.com/Arekss/projekt.git
   ;;
   "clean")
	 sudo rm -Rf projekt
	 sudo rm -Rf updatedScript
   ;;
   "update")
	 git clone https://github.com/Arekss/updatedScript.git
   ;;
esac
