#!/bin/bash

# Find and remove all "a.out" files recursively
find . -type f -name 'a.out' -exec rm {} +