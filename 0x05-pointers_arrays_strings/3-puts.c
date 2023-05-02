#include "main.h"

/**
 *_puts - function that prints a string
 *@str: The string to print
 *
 *Return: String and a new line
*/
void _puts(char *str)
{
	int j = 0;

	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
