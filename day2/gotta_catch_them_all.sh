#!/bin/bash
sed 's;:\/u\/;\n;g' | grep " ${1}" -i | wc -l
