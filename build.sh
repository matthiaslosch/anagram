#!/bin/bash

mkdir -p build
pushd build
gcc -o anagram ../main.c
popd
