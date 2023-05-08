#include "main.h"

/**
 *_strspn - function that gets the length of a prefix substring.
 *@s:number of bytes in the initial segment
 *@accept:consist only bytes from
 *
 *Return:the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int i;

	while (*s)
	{
		for (; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}
