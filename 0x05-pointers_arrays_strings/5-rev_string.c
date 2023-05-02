#include "main.h"

/**
 *rev_string - function that reverses a string.
 *
 *@s: pointing to the string
 * Return:0
 */
void rev_string(char *s)
{
	int len, j, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	;
	j = 0;
	half = len / 2;

	while (half--)
	{
		temp = s[len - j - 1];
		s[len - j - 1] = s[j];
		s[j] = temp;
		j++;
	}
}
