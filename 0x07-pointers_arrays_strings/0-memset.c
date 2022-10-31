
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
alx-low_level_programming/0x07-pointers_arrays_strings/0-memset.c
@dennisnderitu254
dennisnderitu254 function that fills memory with a constant byte
 1 contributor
26 lines (23 sloc)  380 Bytes
/*
 * File: 0-memset.c
 * Auth: not
 */

#include "main.h"

/**
*_memset - The _memset() function fills
* the first n bytes of the memory area
* pointed to by s with the constant byte b
*@s:target
*@b: constant byte
*@n:number of byte
*Return: returns new value of target
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
