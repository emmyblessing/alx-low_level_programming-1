#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int y = 1;
	unsigned long int x = 2;
	unsigned long int l = 1000000000;
	unsigned long int y1;
	unsigned long int y2;
	unsigned long int x1;
	unsigned long int x2;

	printf("%lu", y);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", x);
		x += y;
		y = x - y;
	}

	y1 = (y / l);
	y2 = (y % l);
	x1 = (x / l);
	x2 = (x % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", x1 + (x2 / l));
		printf("%lu", x2 % l);
		x1 = x1 + y1;
		y1 = x1 - y1;
		x2 = x2 + y2;
		y2 = x2 - y2;
	}
	printf("\n");
	return (0);
}