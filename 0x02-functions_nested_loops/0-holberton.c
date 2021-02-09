int _putchar(char c);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
char str[10] = "Holberton";
int i = 0;
while (i < 9)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
return (0);
}
