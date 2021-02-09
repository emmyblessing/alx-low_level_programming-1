#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void){
    int s,m,result;
    for(s=0;s<=9;s++){
        for(m=0;m<=9;m++){
            result = s*m;
            if(m !=0){
                _putchar(',');
                _putchar(' ');
            }
             if(m == 0){
                _putchar('0');
            }else if (result >= 10)
            {
                _putchar((result /10) + '0');
                _putchar((result%10) + '0');
            }else if ((result < 10) && (m != 0))
            {
                _putchar(' ');
                _putchar((result%10) + '0');
            }
        }
        _putchar('\n');
    }
   
}