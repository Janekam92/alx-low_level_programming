#include "main.h"

/**
 *_strcpy - function that copies the string pointed to by src
 * @dest: Destination value
 * @src: Source value
 *Description: copies the string pointed to by src
 *to the buffer pointed to by dest.
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\n');

	return (dest);
}
