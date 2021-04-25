@echo off

if not exist build mkdir build

where cl >nul 2>nul

pushd build
cl /nologo /Zi /Feanagram.exe ..\main.c
popd
