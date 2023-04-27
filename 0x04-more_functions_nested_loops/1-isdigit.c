#include "main.h"

/**
 *_isdigit - check if the character is a digit
 *@c: The number to be checked
 *Return: 1 if the characteris checked and 0 anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
