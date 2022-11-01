#include "main.h"
/**
*_strchr - Returns a pointer to the first occurrence
*of the character c in the string s, or NULL if the
*character is not found
*
*@s:string targeted
*@c:character targeted
*
*Return: returns pointer to first occcurence of c
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (; s[i]; i++)
	{
		 for (j = 0; accept[j]; j++)
		 {
			 if (s[i] == accept[j])
			 {
				 break;
			 }
		 }
		 if (s[i] != accept[j])
			 break;
	}
	return (i);
}
