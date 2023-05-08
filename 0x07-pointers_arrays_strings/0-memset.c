#include "main.h"

/**
 *_memset - function fills the first n bytes of the memory area
 *pointed to by s with the constant byte b
 *
 *@n:bytes of the memory area pointed to
 *@s:the constant byte
 *@b:memory poiter
 *
 *Return:pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		s[j] = b;
		j++;
	}

	return (s);
}
