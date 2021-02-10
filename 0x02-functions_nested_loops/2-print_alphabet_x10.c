#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(){
    int j=0,i;
    while(j<10){
        for (i=97;i<=122;i++){
        _putchar(i);
    }
     _putchar('\n');
     j++;

    }
    
}