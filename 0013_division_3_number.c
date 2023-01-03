/*Write a C program to input three numbers from user and calculate their division.
C program to add three numbers and display their division as output.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, div;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("\nEnter second number: ");
    scanf("%f", &b);

    printf("\nEnter third number: ");
    scanf("%f", &c);

    div = a / b / c;
    printf("\nThe result is: %.2f\n", div);
}
