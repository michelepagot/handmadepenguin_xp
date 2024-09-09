Follow along https://davidgow.net/handmadepenguin/

# Getting started

## Dependency

### Linux
I give it a try on a openSUSE TW powered system (and even one running as a WSL on Win11 machine, and even on an aarch64 machine). 

Packages that I installed on to start:

´´´
# zypper install -t pattern devel_basis
# zypper in gdb ninja cmake gcc clang libstdc++-devel libSDL2-2_0-0
´´´

### Windows

I have Visual Studio 2022 and build from its configured prompt 

*Visual Studio 2022 Developer Command Prompt v17.11.2*

On top of that I installed cmake and ninja

### SDL2 library

I decided to build SDL2 from source code using cmake as documented https://wiki.libsdl.org/SDL2/Installation
I manage to do it for Linux and Windows. 

## Build

´´´
$ mkdir BUILD && cd BUILD
$ cmake -GNinja ..
$ ninja
´´´

## Run

## Test

# Contributing
