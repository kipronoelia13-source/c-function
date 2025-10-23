/*
Name;Elia kiprono 
Reg no;PA106/28745/25
Date;23/10/2025
Description ;c function to convert to celsius
*/
#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float F;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);
    printf("Temperature in Celsius = %.2f\n", convertToCelsius(F));
    return 0;
}