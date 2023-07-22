//Lab 4
//Write a C program that reads in a five-digit integer and determines whether it is a palindrome or not

#include <stdio.h>

int main(void) {
	int number, temp_number, remainder;
	int reverse_number = 0;
	
	printf("Enter number \n");
	scanf("%d", &number);
	
	temp_number = number;
	while (temp_number > 0) {    
        remainder = temp_number % 10;   
        reverse_number = reverse_number * 10 + remainder;
        temp_number /= 10;
    }  
	
    if (number == reverse_number) {
        printf("%d is a palindrome", number);
    } else {
        printf("%d is not a palindrome", number);
    }
	    
	return 0;
}