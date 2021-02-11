#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * c should start from 65 upto 90 for capital letter the rest should be declined
 * Return: Always 0.
 */

int _isupper(int c){
    if(c >= 65 && c <=90){
        return (1);
    }else{
        return (0);
    }
    return 0;
}