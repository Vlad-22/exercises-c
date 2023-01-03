/*Write a C program to input three numbers from user and calculate their multiplication.
C program to add three numbers and display their multiplication as output.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, mul;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("\nEnter second number: ");
    scanf("%d", &b);

    printf("\nEnter third number: ");
    scanf("%d", &c);

    mul = a * b * c;
    printf("\nThe result is: %d\n", mul);
}
