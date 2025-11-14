#!/bin/bash
g++-15 -std=gnu++20 -O2 -Wall "$CP" -o ./bin/"$(basename "$CP" .cpp)".out && ./bin/"$(basename "$CP" .cpp)".out

# cd problems/
# export CP=./800/116A.cpp 
# run with: ./macrun.sh