/*Write a C program to input two numbers from user and calculate their division.
C program to add two numbers and display their division as output.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, div;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("\nEnter second number: ");
    scanf("%f", &b);

    div = a / b;
    printf("\nThe result is: %.2f\n", div);
}
