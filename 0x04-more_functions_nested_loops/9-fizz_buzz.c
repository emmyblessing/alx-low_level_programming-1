#include"holberton.h"
#include<stdio.h>

/*  Fizz-Buzz
* int i 1-100
*\n new line
* multiple of 3 = Fizz
* multiple of 5 = Buzz
*multiple of both 3 and 5 = FizzBuzz
*each result separated with space.
*/
void fizz_buzz(void){
    int i;

    for(i=1; i<=100; i++){
        if(i%3 ==0 && i%5 == 0){
            printf("FizzBuzz ");
        }else if (i%3 == 0)
        {
            printf("Fizz ");
        }else if (i%5 ==0)
        {
            printf("Buzz ");
        }else
        {
            printf("%d ",i);
        }
    }
   printf("\n");
}

int main(void){
    fizz_buzz();
    return (0);
}
