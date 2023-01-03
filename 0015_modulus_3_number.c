/*Write a C program to input three numbers from user and calculate their modulus.
C program to add three numbers and display their modulus as output.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, mod;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("\nEnter second number: ");
    scanf("%d", &b);

    printf("\nEnter third number: ");
    scanf("%d", &c);

    mod = a % b % c;
    printf("\nThe result is: %d\n", mod);

}
