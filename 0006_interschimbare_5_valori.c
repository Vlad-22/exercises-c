#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp, x1, x2, x3, x4, x5;
    printf("Dati valori lui x1: ");
    scanf("%d", &x1);
    printf("Dati valori lui x2: ");
    scanf("%d", &x2);
    printf("Dati valori lui x3: ");
    scanf("%d", &x3);
    printf("Dati valori lui x4: ");
    scanf("%d", &x4);
    printf("Dati valori lui x5: ");
    scanf("%d", &x5);

    printf("%d, %d, %d, %d, %d\n", x1, x2, x3, x4, x5);

    temp = x1;
    x1 = x2;
    x2 = x3;
    x3 = x4;
    x4 = x5;
    x5 = temp;

   printf("%d, %d, %d, %d, %d\n", x1, x2, x3, x4, x5);

    return 0;
}
