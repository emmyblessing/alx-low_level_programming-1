#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void){
    int hrs,min;
    for(hrs =0; hrs<24;hrs++){
        for(min =0; min<60;min++){
            _putchar((hrs/10)+'0');
            _putchar((hrs%10)+'0');
            _putchar(':');
            _putchar((min/10)+'0');
            _putchar((min%10)+'0');
            _putchar('\n');
        } 
    }
}

int main(void)
{
    jack_bauer();
    return (0);
}