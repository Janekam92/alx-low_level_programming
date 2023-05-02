#include "main.h"

/**
 *_strlen - function that returns the length of a string
 *@s: String to be checked
 *Return: String length
 */

int _strlen(char *s)
{
	int strlen = 0;

	while (s[strlen])
		strlen++;
	return (strlen);
}
