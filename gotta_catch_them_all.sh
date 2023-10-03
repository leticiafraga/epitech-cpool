#!/bin/bash
sed 's;bin\/shell;\n;g' | grep " ${1}" -i | wc -l
