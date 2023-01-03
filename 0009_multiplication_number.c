/*Write a C program to input two numbers from user and calculate their multiplication.
C program to add two numbers and display their multiplication as output.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, mul;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("\nEnter second number: ");
    scanf("%d", &b);

    mul = a * b;
    printf("\nThe result is: %d\n", mul);

}
