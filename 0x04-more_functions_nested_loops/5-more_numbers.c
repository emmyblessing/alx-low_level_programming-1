#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers from 0-14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int x =0;
	int y;

	/*for (x = 0; x <= 9; x++)*/
    while(x<=9)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
				_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
        x++;
	}
}

