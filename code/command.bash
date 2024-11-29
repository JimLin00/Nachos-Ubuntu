#!/bin/sh
make clean
make
build.custom/nachos -e test/fileIO_test1
build.custom/nachos -e test/fileIO_test2
