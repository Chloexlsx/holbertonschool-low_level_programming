#!/bin/bash

# Check if exactly one argument is provided
if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <file.c>"
    exit 1
fi

# Get the file name and check if it ends with .c
filename="$1"
if [[ "$filename" != *.c ]]; then
    echo "Error: File must have a .c extension"
    exit 1
fi

# Get the base name (without .c)
basename="${filename%.c}"

# Compile the file
gcc -Wall -Werror -Wextra -pedantic -std=gnu89  "$filename" -o "$basename"

# Check if compilation succeeded
if [ $? -eq 0 ]; then
    echo "Compilation successful. Output: $basename"
else
    echo "Compilation failed."
    exit 1
fi

