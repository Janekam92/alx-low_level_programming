#include "main.h"

/**
 *_islower - checks if a char is lowercase
 *
 *@c: The character in ASCII code
 *
 *Return: 1 if lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
