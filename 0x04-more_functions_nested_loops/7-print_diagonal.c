#include "holberton.h"
#include <stdio.h>

/**
 * print_diagonal - Print diagonal line dependent on the integer n.
 * @n : The number of lines using '\' characters to use
 * Return: Void.
 */
void print_diagonal(int n)
{
	int i;
	int S;

	for (i = 0; i < n; i++)
	{
		for (S = 0; S < i; S++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}

