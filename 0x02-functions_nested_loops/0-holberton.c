#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
char ch[10] = "Holberton";
int i = 0;
while (i < 9)
{
_putchar(ch[i]);
i++;
}
_putchar('\n');
return (0);
}
