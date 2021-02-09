#include <stdio.h>

/**
 * main - Entry point
 *
 * purpose - fibonacci
 *
 * Return: (0) always
 */
	int main(void)
	{
		unsigned long int limit = 4000000;
		unsigned long int before = 0;
		unsigned long int after = 1;
		unsigned long int R = 0;
		unsigned long int sum = 0;

		while (limit > R)
		{
			R = before + after;

			if ((R % 2) == 0)
			{
				sum += R;
			}

			before = after;
			after = R;
		}
		printf("%li\n", sum);
		return (0);
}