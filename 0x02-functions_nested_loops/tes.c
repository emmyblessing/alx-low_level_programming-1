#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_times_table(int n){
    int s,m,result;
    if ( n > 15 || n<0){
    }else{

for(s=0;s<=n;s++){
        for(m=0;m<=n;m++){
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
    
   
}
int main(void)
{
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);  
    return (0);
}