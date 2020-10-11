#!/bin/sh

if [ $# -ne 1 ]; then
  echo "Usage: bpp file1 ... fileN"
fi

for var in "$@"
do
  cpp -E "$var" -I. | sed -e 's/@@"//g' -e 's/"@@//g' -e 's/@@@"/"/g' -e 's/"@@@/"/g' -e '/^#/d' -e '/^$/d'
done
