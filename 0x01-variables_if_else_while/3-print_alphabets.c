#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, y;

for (x = 97; x<= 122; x++)
{
putchar(x);
}
for (y = 65; y <= 90; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}
