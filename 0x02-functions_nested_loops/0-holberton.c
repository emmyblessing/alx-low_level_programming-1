int _putchar(char c);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main (void){
    char c[9] = "Holberton";
    int x =0;
    while (x<9)
    {
        _putchar(c[x]);
        x++;
    }
    _putchar('\n');
    return (0);
}
