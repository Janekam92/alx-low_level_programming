#include "main.h"

/**
 *print_most_numbers - Print the numbers from 0 to 9
 *
 *Description: Prints the numbers excluding 2 and 4
 *
 * Return: The numbers from 0 up to 9
 */

void print_most_numbers(void)
{
	int j = 0;

	for (; j <= 9; j++)
	{
		if (j == 2 || j == 4)
		{
			continue;
		}
		else
		{
			_putchar(j + '0');
		}
	}

	_putchar('\n');
}
