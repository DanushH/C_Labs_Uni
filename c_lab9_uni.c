//Lab 09
/*
Implement the following integer functions.
a) Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
b) Function fahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
c) Use these functions to write a program that points that prints charts showing the Fahrenheit equivalents of all Celsius temperatures from 1 to 100 degrees and the Celsius equivalents of all Fahrenheit temperatures from 32 to 212 degrees. Print the outputs in a tabular format.
*/

#include <stdio.h>

//function declaration
float celsius(float);
float fahrenheit(float);

void main() {
    float fahrenheitT, celsiusT;
    
    printf("Enter temperature in Fahrenheit \n");
    scanf("%f", &fahrenheitT);
    printf("%.2f C = %.2f F \n", fahrenheitT, celsius(fahrenheitT));
    
    printf("Enter temperature in Celsius \n");
    scanf("%f", &celsiusT);
    printf("%.2f C = %.2f F \n", celsiusT, fahrenheit(celsiusT));
	
}   //end main

float celsius(float f) {
    float temp_in_celsius;
    
    temp_in_celsius = (f - 32) * 5 / 9;
    
    return temp_in_celsius;
}   //end celsius

float fahrenheit(float c) {
    float temp_in_fahrenheit;
    
    temp_in_fahrenheit = (c * 9 / 5) + 32;
    
    return temp_in_fahrenheit;
}   //end fahrenheit



