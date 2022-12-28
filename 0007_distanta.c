/*O broasca-testoasa parcurge o distanta de D kilometri in H ore. Sa se scrie un program care sa calculeze si sa afiseze viteza cu care se deplaseaza broasca-testoasa
(exprimata in metri/secunda)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float D, H, x, y, z;
    printf("Introduceti kilometrii: ");
    scanf("%f", &D);
    printf("\nIntroduceti orele: ");
    scanf("%f", &H);

    x = D / H;
    y = x * 1000;
    z = y / 1200;

    printf("\nMetri / secunde: %.2f\n", z);

    return z;
}
