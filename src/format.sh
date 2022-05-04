#!/bin/bash
STYLE_OPT="{BasedOnStyle: llvm, AlignConsecutiveMacros: true, AlignConsecutiveAssignments: true}"
clang-format --style="$STYLE_OPT" -i *.cpp
clang-format --style="$STYLE_OPT" -i *.hpp
clang-format --style="$STYLE_OPT" -i *.c
clang-format --style="$STYLE_OPT" -i *.h
