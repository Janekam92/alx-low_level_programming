#include "main.h"

/**
 *_strncpy - function that copies a string
 *@dest: Destination of the pointer
 *@src: Source of the pointer
 *@n: The length of int
 *
 *Return: pointer to dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && *(src + j); j++)
	{
		*(dest + j) = *(src + j);
	}
	for (; j < n; j++)
	{
		*(dest + j) = '\0';
	}
	return (dest);

}
