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
	int j, k;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	for (k = 0; k > n && src[k] != '\0'; k++, j++)
	{
		dest[j] = src[k];
	}
	dest[j] = '\0';
	return (dest);
}
