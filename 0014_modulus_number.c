/*Write a C program to input two numbers from user and calculate their modulus.
C program to add two numbers and display their modulus as output.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, mod;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("\nEnter second number: ");
    scanf("%d", &b);

    mod = a % b;
    printf("\nThe result is: %d\n", mod);

}
