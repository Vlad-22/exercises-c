#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1, v2, D, t1, Vm, X;

    printf("Vasilica merge cu viteza: ");
    scanf("%f", &v1);

    printf("\nIonica merge cu viteza: ");
    scanf("%f", &v2);

    printf("\nDistanta dintre cele 2 localitati: ");
    scanf("%f", &D);

    Vm = (v1 + v2)/2;
    t1 = (D/Vm)/2;

    printf("\nVasilica si Ionica se intlnesc dupa timpul: %.2f\n", t1);

    X = v1 * t1;

    printf("\nSe intalnesc la o distanta: %.2f\n", X);

}
