#include"holberton.h"

void print_square(int size){
    int x,y;
    for(x=0; x < size; x++){
        for(y=0; y < size; y++){
            _putchar('#');
        }
        _putchar('\n');
    }
    
    if (size == 0 || size < 0)
    {
        _putchar('\n');
    }
}

