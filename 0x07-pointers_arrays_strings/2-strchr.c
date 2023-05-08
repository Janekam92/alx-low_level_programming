#include "main.h"

/**
 *_strchr - function that locates a character in a string
 *@s:occurrence of the character
 *@c:in the string
 *
 *Return:a pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
