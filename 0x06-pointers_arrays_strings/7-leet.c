#include "main.h"

/**
 *leet - function that encodes a string into 1337
 *@x: poit to the string
 *
 *Return: pointer to x
 */

char *leet(char *x)
{
	int strlen, letc;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	strlen = 0;
	while (x[strlen] != '\0')
	{
		letc = 0;
		while (letc < 10)
		{
			if (a[letc] == x[strlen])
			{
				x[strlen]  = b[letc];
			}
			letc++;
		}
		strlen++;
	}
	return (x);
}
