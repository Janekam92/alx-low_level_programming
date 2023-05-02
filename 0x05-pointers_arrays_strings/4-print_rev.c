#include "main.h"

/**
 *print_rev - function that prints a string, in reverse
 *
 *@s: The string to be checked
 *
 *Return: Always 0.
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
