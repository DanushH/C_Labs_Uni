//Lab 07
/* Write a program that prints the following patterns. Use for loop to generate the patterns. All asterisks (*) should be printed by a single printf statements.
( a )
*
**
***
****
*****
******
*******
********
*********
**********
(b)
**********
*********
********
*******
******
*****
****
***
**
*

*/

#include <stdio.h>  
  
int main() {  
    int rows = 10;  
    
    for (int i = 1; i <= rows; i++) {  
        for (int j = 1; j <= i; j++) {  
            printf("*");  
        }  
        printf("\n");  
    }   //(a)
    
    for (int i = rows; i >= 1; i--) {  
      for(int j = 1; j <= i; j++) {  
          printf("*");  
      }  
      printf("\n");
    }   //(b)
    
    return 0; 
}
