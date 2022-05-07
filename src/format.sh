#!/bin/bash
STYLE_OPT="{BasedOnStyle: llvm, AlignConsecutiveMacros: true, AlignConsecutiveAssignments: true}"

for f in *.cpp *.cpp *.c *.h; do
  echo "formatting ${f}"
  clang-format --style="$STYLE_OPT" -i $f
done
