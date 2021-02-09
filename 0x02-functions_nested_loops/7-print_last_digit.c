#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_last_digit(int n){
    	
    n = n%10;
    if(n<0){
        n = -n;
      _putchar(n + '0');
      return n;
    }
return 0;
}