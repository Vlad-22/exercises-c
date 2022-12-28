/*Write a C program to input two numbers from user and calculate their sum.
C program to add two numbers and display their sum as output.
How to add two numbers in C programming.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, sum;

    printf("Enter the first numer: ");
    scanf("%d", &a);

    printf("\nEnter the second numer: ");
    scanf("%d", &b);

    sum = a + b;
    printf("\nThe result is: %d\n", sum);

    return 0;
}
