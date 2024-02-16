#!/bin/bash

# Remove files starting with "test" and ending with ".c"
find . -type f -name 'test*.c' -exec rm {} +
find . -type f -name 'a.out' -exec rm {} +
find . -type f -name 'main.c' -exec rm {} +
find . -type f -name 'ft_stock_str.h' -exec rm {} +
find . -type f -name '*.sh' -exec rm {} +