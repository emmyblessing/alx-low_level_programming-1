int _putchar(char c);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
char word[10] = "Holberton";
int a = 0;
while (a < 9)
{
_putchar(word[a]);
a++;
}
_putchar('\n');
return (0);
}
