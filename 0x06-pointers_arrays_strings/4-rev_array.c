#include "main.h"

/**
 *reverse_array - unction that reverses the content of an array of integers
 *@n: number of elements of the array
 *@a: array
 *
 *Return:  nothing.
 */

void reverse_array(int *a, int n)
{
	int temp, cntr;

	n = n - 1;
	cntr = 0;
	while (cntr <= n)
	{
		temp = a[cntr];
		a[cntr++] = a[n];
		a[n--] = temp;
	}
}
