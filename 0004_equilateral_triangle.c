/*Scrieti un program care citeste de la tastatura lungimea laturii unui triunghi echilateral si afiseaza pe ecran lungimea inaltimii triunghiului si
aria sa, pe linii diferite, insotite de mesaje explicative.*/

#include <stdio.h>
#include <math.h>

int main() {
    int latura;
    printf("Introduceti latura triunghiului: ");
    scanf("%d", &latura);
    printf("Inaltimea: %.2lf\n", (sqrt(3)/2)*latura);
    printf("Aria: %.2lf\n", (latura*latura*sqrt(3)/4));
    return 0;
}
