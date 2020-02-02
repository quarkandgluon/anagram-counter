# Anagram Finder

This simple C program determines whether 2 strings are anagrams.

## How it works
- The program accepts two strings as command-line arguments
- It counts the frequency of each lowercase letter (a-z) in both strings
- If both strings have the same letter frequencies, they are anagrams
- Spaces and non-alphabetic characters are ignored in the comparison

## Usage
```bash
Usage: [executable-name] <string1> <string2>
```

## Build & Run
### Using GCC (MinGW on Windows)
```bash
gcc anagram-finder.c -o [executable-name].exe
./[executable-name] "listen" "silent"
```
### Using MSVC
```bash
cl anagram-finder.c
anagram-finder.exe "listen" "silent"
```

Created by [Quark And Gluon](https://github.com/quarkandgluon/interstellar-weight)


