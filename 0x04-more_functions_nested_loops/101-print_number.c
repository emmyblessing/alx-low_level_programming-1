#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - like a hello world
 *
 * @n: params an integer
 *
 * No return
 */


void print_number(int n)
{

	unsigned int s1 = 0;

	if  (n < 0)
	{
		s1 = -n;
		_putchar('-');
	}

	else
	{
		s1 = n;
	}

	if (s1 / 10)
	{
		print_number(s1 / 10);
	}

	_putchar((s1 % 10) + '0');
}