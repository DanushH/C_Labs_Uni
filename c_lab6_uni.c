//Lab 06
//Write a C program that reads a nonnegative integer and computes and print its factorial using a while loop.
//Write a C program that reads a nonnegative integer and computes and print its factorial using a for loop.

#include<stdio.h>  

int main() {    
	 int number;    
	 int factorial = 1;
	 
	 printf("Enter a number \n");    
	 scanf("%d",&number);    
	 
	 int i = 1;
	 while (i <= number) {
		  factorial *= i;
		  i++;
	 }
	 
	/*	 or 
	 for (int i = 1; i <= number; i++){    
		  factorial *= i;    
	 }    
	*/ 
	 printf("Factorial of %d is %d", number, factorial);
	 return 0;  

}

