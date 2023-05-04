#include "main.h"

/**
 *_strncat - function that concatenates two strings
 *@dest: Destination of the ponter
 *@src: Source of the pointer
 *@n: Numbers of bytes to be concatenated
 *Return: Pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
}
