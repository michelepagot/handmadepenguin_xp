Follow along https://davidgow.net/handmadepenguin/

# Getting started

## Dependency

I give it a try on a openSUSE TW powered system (and even one running as a WSL on Win11 machine, and even on an aarch64 machine). 

Packages that I installed on to start:

´´´
# zypper install -t pattern devel_basis
# zypper in gdb ninja cmake gcc clang libstdc++-devel
´´´

## Build

´´´
$ mkdir BUILD && cd BUILD
$ cmake -GNinja ..
$ ninja
´´´
## Run

## Test

# Contributing
