#include <stdio.h>

/**
 * main - fibonacci 50
 *
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int before = 1;
	unsigned long int after = 2;

	printf("%lu", before);

	for (i = 1; i < 50; i++)
	{
		printf(", %lu", after);
		after += before;
		before = after - before;
	}
	printf("\n");
	return (0);
}
