#include "main.h"

/**
 *_strpbrk - function that searches a string for any of a set of bytes
 *@s:locates the first occurrence in the string
 *@accept:the bytes in the string
 *
 *Return:a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
