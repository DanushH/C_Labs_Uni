//Lab 03
//Write a C program to enter a number from the keyboard and print whether it is an even number or an odd number.
//version 2

#include <stdio.h>
#include <stdbool.h>

int get_number();
bool check_even(int num);
void print_result(int num, bool is_true);

void main(void) {
	
	int num = get_number();
	bool is_even = check_even(num);
	print_result(num, is_even);
    
}   //end main






int get_number() {
    int num;
	
	do {
	    printf("Enter a positive number \n");
	    scanf("%d", &num);
	} while (num < 0);
	
	return num;
}


bool check_even(int num) {
    return num % 2 == 0;
}


void print_result(int num, bool is_true) {
    is_true ? printf("%d is even", num)
        : printf("%d is odd", num);
}

