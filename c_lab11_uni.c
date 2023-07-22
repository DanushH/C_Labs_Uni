//Lab 11
/*
Implement a function called convertToUpperCase ( ) which take a string (a mix of uppercase and lower case letters) as an argument and display the string in only upper case letters. 
void convertToUpperCase (char a[ ], int size );
Hint : ‘a’ – 97, ‘z’ - 122, ‘A’ – 65, ‘Z’ - 90
*/

#include <stdio.h>
#include <string.h>

//fucntion declaration
void convertToUpperCase (char*, int);

int main() {
   char mix_string[100];
   int size;
   
   printf("Enter a string \n");
   scanf("%s", &mix_string);
   
   size = strlen(mix_string);
   convertToUpperCase(mix_string, size);
    
}   //end main

void convertToUpperCase (char* a, int size) {
    
    //loop through string    
    for (int i = 0; i < size; i++) {
        //check ascii values
        if(a[i] >= 'a' && a[i] <= 'z') {
            a[i] -= 32;
        }   //if
    
    }   //for
    
    printf("Uppercase string: %s", a);
}   //end convertToUpperCase

