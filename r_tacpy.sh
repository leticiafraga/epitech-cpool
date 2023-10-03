#!/bin/bash

sed 's;bin\/shell;\n;g' | head -n $MY_LINE2 | tail -n +$MY_LINE1  |  sed -n 'n;p' | cut -d ' ' -f 1-2 | cut -d : -f 1 | rev | sort | sed -z 's/\n//g;s/ /, /g' | sed 's/, $/.\n/'
