#include "main.h"

/**
 *print_triangle - Prints a triangle of squares according parameter
 *@size: The size of the squares triangle
 *
 *Return:0
 */

void print_triangle(int size)
{
	int j, y, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (y = size - j; y > 1; y--)
		{
			_putchar(32);
		}
			for (k = 0; k <= j; k++)
			{
				_putchar(35);
			}

			for (k = 0; k <= j; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
