
Sign up
dennisnderitu254
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x07-pointers_arrays_strings/main.h
@dennisnderitu254
dennisnderitu254 Adding main file, project Header file and _putchar function
 1 contributor
25 lines (21 sloc)  656 Bytes
#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Dev Nderitu
 *description: Header file containing prototypes for all functions
 * used in the0x07-pointers_arrays_strings directory
 */


#include <stdio.h>
#include <stddef.h>

void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
unsigned int _strspn(char *s, char *accept);
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
#endif /* MAIN_H */
