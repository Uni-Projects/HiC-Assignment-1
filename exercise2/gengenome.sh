#!/bin/bash

for l in {0..499}; 
do
 for c in {0..99};
 do
   shuf -e A G C T -n 1 | tr -d "\n"
 done
 echo ""
done
