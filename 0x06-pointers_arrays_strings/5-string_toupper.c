#include "main.h"

/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *@a: string
 *
 *Return: pointer to uppercase string
 */

char *string_toupper(char *a)
{
	int len;

	len = 0;

	while (a[len] != '\0')
	{
		if (a[len] >= 97 && a[len] <= 122)
		{
			a[len] = a[len] - 32;
		}
		len++;
	}
	return (a);
}
