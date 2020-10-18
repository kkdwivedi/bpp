#!/bin/sh

if [ $# -ne 1 ]; then
  echo "Usage: bpp file1 ... fileN"
fi

for var in "$@"
do
  sed -e "s/'/\&apos;/g" "$var" | cpp -E -I. -I./kkd/ | sed -e 's/@@/"/g' -e '/^#/d' -e '/^$/d'
done
