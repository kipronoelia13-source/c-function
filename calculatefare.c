/*
Name;Elia kiprono 
Reg no;PA106/28745/25
Date;23/10/2025
Description ;c function to calculate fare according to distance covered 
*/
#include <stdio.h>

// Function to calculate total fare
float calculateFare(float distance) {
    float fareRate = 50;   // KSh 50 per kilometer
    float totalFare = distance * fareRate;
    return totalFare;
}

int main() {
    float distance;

    printf("Enter distance traveled (in kilometers): ");
    scanf("%f", &distance);

    printf("Total fare = KSh. %.2f\n", calculateFare(distance));

    return 0;
}
