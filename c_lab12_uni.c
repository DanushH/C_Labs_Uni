//Lab 12
/*
A university needs to maintain a text file to store and retrieve their student’s details such as name, class, year and total marks.
Write a C program to do the following;
a) Create a file pointer
FILE *fPtr;
b) Open the file to write data
fPtr = fopen ( “Student.dat”, “w”);
c) Input the data of 5 students from the keyboard and store in the file. Write the data to the file using
fprintf(fPtr, “%s %c %d %d \n”, name, class, year, GPA);
d) Modify the program to open the “Student.dat” file you created above and print the data in a tabular form.
*/

#include <stdio.h>

int main() {
    FILE *fptr;
    char name[20];
    int sclass;
    int year;
    float GPA;

    // Open a file in Write mode
    fptr = fopen("Student.dat", "w");

    for (int i = 0; i < 5; i++) {
        printf("Enter name \n");
        scanf("%s", &name);
        
        printf("Enter class \n");
        scanf("%d", &sclass);
        
        printf("Enter year \n");
        scanf("%d", &year);
        
        printf("Enter GPA \n");
        scanf("%f", &GPA);
        
        fprintf(fptr, "%s %d %d %.3f \n", name, sclass, year, GPA);
        
    }  //for

    // Close the file
    fclose(fptr);
  
    // Open the file in Read mode
    fptr = fopen("Student.dat", "r");

    // Store the content of the file
    char file_lines[50];

    // Read the content and print it
    while(fgets(file_lines, 50, fptr)) {
        printf("%s", file_lines);
    }

    // Close the file
    fclose(fptr);

    return 0;
}   //end main



