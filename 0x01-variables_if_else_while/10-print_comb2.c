#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int m, n;

for (m = 48; m <= 57; m++)
{
for (n = 48; n <= 57; n++)
{
putchar(m);
putchar(n);
if (m == 57 && n == 57)
{

}
else
{
putchar(44);
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
