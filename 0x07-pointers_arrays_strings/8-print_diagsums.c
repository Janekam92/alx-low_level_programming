#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - function that prints the sum of the two diagonals
 * a square matrix of integers.
 *@a:pointer to matrix
 *@size:width ot the matrix
 *
 *Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int mat1, mat2, j;
	mat1 = 0;
	mat2 = 0;

	for (j = 0; j < size; j++)
	{
		mat1 = mat1 + a[j * size + j];
	}
	for (j = size - 1; j >= 0; j--)
		mat2 += a[j * size + (size - j -1)];
	printf("%d, %d\n", mat1, mat2);
}
