#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_to_98(int n){

    if(n<= 98){
        for(n=0;n <= 98; n++)
        printf("%d, ",n);
    }else
    {
        for(n=0;n > 98; n--)
        printf("%d, ",n);
    }
    printf("98\n");
     
}