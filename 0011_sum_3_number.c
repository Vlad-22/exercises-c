/*Write a C program to input three numbers from user and calculate their sum.
C program to add three numbers and display their sum as output.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, sum;

    printf("Enter first numer: ");
    scanf("%d", &a);

    printf("\nEnter tsecond numer: ");
    scanf("%d", &b);

    printf("\nEnter third number: ");
    scanf("%d", &c);

    sum = a + b + c;
    printf("\nThe result is: %d\n", sum);

    return 0;
}
