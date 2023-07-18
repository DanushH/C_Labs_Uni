//Lab 03
//Write a C program to enter a number from the keyboard and print whether it is an even number or an odd number.

#include <stdio.h>

int main(void) {
	int number;
	
	printf("Enter number \n");
	scanf("%d", &number);
	
    if (number % 2 == 0) {
        printf("%d is an even number", number);
    } else {
        printf("%d is an odd number", number);
    }
	    
	return 0;
}
