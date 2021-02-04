#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int m, n, o;

for (m = 48; m <= 57; m++)
{
for (n = 48; n <= 57; n++)
{
for (o = 48; o <= 57; o++)
{
if (m == n || m == o || n == o || n <= m || o <= n)
{
}
else
{
putchar(m);
putchar(n);
putchar(o);
if (m == 55 && n == 56 && o == 57)
{
}
else
{
putchar(44);
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
