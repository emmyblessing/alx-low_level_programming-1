#include "holberton.h"

int _putchar(char c);

/**
 * print_times_table - print the times table until n
 *
 * @n: n times table
 *
 * Return: No return
 */

void print_times_table(int n)
{
	int x;
	int y;

	if (n >= 0 && n <= 15)
	{

		for (x = 0; x <= n; x++)
		{

			for (y = 0; y <= n; y++)
			{

				if ((x * y) < 10)
				{
					if (y != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((y * x) + '0');
				}

				else if ((x * y) < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((((y * x) / 10) % 10) + '0');
					_putchar(((y * x) % 10) + '0');
				}

				else if ((x * y) < 1000)
				{
					_putchar(' ');
					_putchar((((y * x) / 100) % 10) + '0');
					_putchar((((y * x) / 10) % 10) + '0');
					_putchar(((y * x) % 10) + '0');
				}
			if (y != (n))
			{
				_putchar(',');
			}

			}

		_putchar('\n');

		}

	}

}
