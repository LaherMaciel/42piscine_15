#!/bin/bash

# Remove main.c
rm -f main.c

# Remove files starting with "test" and ending with ".c"
find . -type f -name 'test*.c' -exec rm {} +
find . -type f -name 'a.out' -exec rm {} +
find . -type f -name 'run.sh' -exec rm {} +
find . -type f -name 'remove_a_out.sh' -exec rm {} +
find . -type f -name 'cleanup.sh' -exec rm {} +