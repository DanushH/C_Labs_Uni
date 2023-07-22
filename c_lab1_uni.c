//Lab 01
//Write a C program to enter two numbers from the keyboard, compute their sum and display

#include <stdio.h>	//header file used to call input & output functions

int main(void) {	// function main begins program execution
    int operand_1, operand_2, sum;
    
    printf("Enter 1st number \n");
    scanf("%d", &operand_1);
    
    printf("Enter 2nd number \n");
    scanf("%d", &operand_2);
    
    sum = operand_1 + operand_2;
    
    printf("Sum of %d and %d is %d \n", operand_1, operand_2, sum);
    return 0;
}	//end of function main
