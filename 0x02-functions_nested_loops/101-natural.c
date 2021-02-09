#include <stdio.h>

/**
 * main - sums 3-5_cous - Entry point
 *
 * Return:  (0)
 */

int main(void)
{
	int s = 0;
	int n = 3; //n3
	int m = 5; //m5
	int sum = 0;
	int limit = 1024;

	while (s == 0)
	{

		if (n < limit)
		{
			sum += n;
			n += 3;
		}

		if (m < limit && (m % 3) != 0)
		{
			sum += m;
			m += 5;
		}
		else if (m % 3 == 0)
		{
			m += 5;
		}

		if (n >= limit && m >= limit)
		{
			s = 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
