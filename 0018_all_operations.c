/*Write a C program to input two numbers and perform all arithmetic operations.
How to perform all arithmetic operation between two numbers in C programming.
C program to find sum, difference, product, quotient and modulus of two given numbers.
Sum;
Difference;
Multiplication;
Division;
Modulus;
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int sum, diff, mul, mod;
    float div;

   printf("Enter first number: ");
    scanf("%d", &a);

    printf("\nEnter second number: ");
    scanf("%d", &b);

    sum = a + b;
    diff = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;

    printf("\nThe result is: %d", sum);
    printf("\nThe result is: %d", diff);
    printf("\nThe result is: %d", mul);
    printf("\nThe result is: %.2f", div);
    printf("\nThe result is: %d\n", mod);
}
