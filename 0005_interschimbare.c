#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp, x1, x2;
    printf("Dati valori lui x1: ");
    scanf("%d", &x1);
    printf("Dati valori lui x2: ");
    scanf("%d", &x2);

    printf("x1 este: %d\n", x1);
    printf("x2 este: %d\n", x2);

    // mut din x1 in temp;
    temp = x1;
    // mut din x2 in x1;
    x1 = x2;
    // mut din temp in x2;
    x2 = temp;

    printf("x1 este: %d\n", x1);
    printf("x2 este: %d\n", x2);

    return 0;
}
