/*Write a C program to input two numbers from user and calculate their difference.
C program to add two numbers and display their difference as output.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, diff;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("\nEnter second number: ");
    scanf("%d", &b);

    diff = a - b;
    printf("\nThe result is: %d\n", diff);

}
