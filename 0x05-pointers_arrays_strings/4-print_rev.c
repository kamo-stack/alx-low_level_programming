#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @S: The string to print
 * Return: void
 */

void print_rev(char *S)
{
	int C = 0;

	while (S[C] != '\0')
	{
	C++;
	}

	for (C -= 1; C >= 0; C--)
	{
	_putchar(S[C]);
	}
	_putchar('\n');
}
