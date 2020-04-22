#!/bin/bash

case "$1" in
   "clone")
	 git clone https://github.com/Arekss/GameOfLife.git
   ;;
   "clean")
	 rm -Rf GameOfLife
   ;;
esac
