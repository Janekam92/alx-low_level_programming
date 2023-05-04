#include "main.h"

/**
 *_strcat - function that concatenates two strings
 *@dest: Destination string pointer
 *@src: Source string pointer
 *
 *Return: Pointer to string destination
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
