#include <stdio.h>
#include <math.h>

int main(void) {
    double r = 2;
    scanf("%lf", &r);
    printf("Aria = %.2lf Parametrul = %.2lf\n", M_PI*r*r, 2*M_PI*r);
    return 0;
}

/* gcc record.c
Aria = 12.57 Parametrul = 12.57
*/ 
