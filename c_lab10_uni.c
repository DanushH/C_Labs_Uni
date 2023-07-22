//Lab 10
/*
Write a C program to multiply the content of array A and B and store it in a new array called C.
int A[5] = { 10, 20, 30, 40, 50};
int B[5] = { 34, 67, 12, 89, 12};
Input a search key (number) from the key board and display the location within the array,
if the search key is found. If not display “Value not found”.
*/

#include <stdio.h>
#include <stdbool.h>

void main() {
    int A[5] = {10, 20, 30, 40, 50};
    int B[5] = {34, 67, 12, 89, 12};
    int search_number;
    int C[5][5];
    bool search_found = 0;
    
    //multiply A and B
    //assign answer to C
    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {
            C[i][j] = A[i] * B[j]; 
            printf("%d \t", C[i][j]);   
        }   //for inner
        
        printf("\n"); 
    }   //for outer 
    
    
    printf("Enter a number to search in array C \n");
    scanf("%d", &search_number);
	
	//loop through C
    for (int a = 0; a < 5; a++) {
        
        for (int b = 0; b < 5; b++) {
			
			//check if  search_number is in C
            if (C[a][b] == search_number) {
                search_found = 1;
                printf("%d found at row %d column %d \n", search_number, a+1, b+1);
            }   //if
            
        }   //for inner
        
    }   //for outer 
    
    if (search_found == 0) {
        printf("Value not found");   
    }
    
}   //end main



