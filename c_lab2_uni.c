//Lab 02
//Write a C program to calculate the perimeter and area of a rectangle given the length and the width

#include <stdio.h>

int main(void) {
	int length, width;
	
	printf("Enter length \n");
	scanf("%d", &length);
	
	printf("Enter width \n");
	scanf("%d", &width);
	
	printf("Perimeter of the rectangle is %d \n", perimeter(length, width));
	printf("Area of the rectangle is %d \n", area(length, width));
	
	return 0;
}

int perimeter(int length, int width) {
	int perimeter = length * 2 + width * 2;
	
	return perimeter;
}

int area(int length, int width) {
	int area = length * width;
	
	return area;
}
