//Lab 05
/*Write a C program to create a simple calculator. The program should allow the user to enter two numbers and an option.
The options are
1. +
2. -
3. *
4. /
You should print an appropriate error message if the user enters invalid operator.
*/

#include <stdio.h>

int main(void) {
	float operand1, operand2, answer;
	char operation;
	
	printf("Enter operation \n");
    scanf("%c", &operation);
    
    printf("Enter first number \n");
	scanf("%f", &operand1);
	printf("Enter second number \n");
	scanf("%f", &operand2);
    
	switch (operation)  {
	    case '+':
	        printf("%.2f %c %.2f = %.2f", operand1, operation, operand2, operand1 + operand2);
	        break;
        case '-':
	        printf("%.2f %c %.2f = %.2f", operand1, operation, operand2, operand1 - operand2);
	        break;
	    case '*':
	        printf("%.2f %c %.2f = %.2f", operand1, operation, operand2, operand1 * operand2);
	        break;
	    case '/':
            printf("%.2f %c %.2f = %.2f", operand1, operation, operand2, operand1 / operand2);
	        break;
	    default:
	        printf("Invaild operator \n");
    }
	
	return 0;
}
