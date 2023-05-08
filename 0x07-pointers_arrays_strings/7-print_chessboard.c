#include "main.h"

/**
 *print_chessboard - function that prints the chessboard
 *@a:pointer to print
 *
 *Return:Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int y;
	int j;

	for (; y < 8; y++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[y][j]);
		_putchar('\n');
	}
}
