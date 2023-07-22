//Lab 08
//Write a function multiple that determines for a pair of integers whether the second integer is a multiple of the first. The function should take two integer arguments and return 1 if the second is a multiple of the first, and 0 otherwise. Use this function in a C program.

#include<stdio.h>

int mulitiple_checker(int num1, int num2) {
    
    if(num1 % num2  == 0) {
        printf("%d is a multiple of %d", num1, num2);
    } else {
        printf("%d is not a multiple of %d", num1, num2 );
    }
   
    return 0;
}

int main() {
    int number1, number2;
   
    printf("Enter two numbers \n" );
    scanf("%d %d", &number1, &number2);

    mulitiple_checker(number1, number2);
    
    return 0;
}


