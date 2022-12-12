/* Afisam numere de masina de forma BH 01 ABC */
/* BH c1 c2 l1 l2 l3 */
#include <stdio.h>
int main() {
  char l1, l2, l3;
  int c1, c2, start, numere = 0;

  for (c1 = 0; c1 <= 9; c1++) {
    if (c1 == 0) {
      start = 1;
    } else {
      start = 0;
    }
    for (c2 = start; c2 <= 9; c2++) {
      for (l1 = 'A'; l1 <= 'Z'; l1++) {
        for (l2 = 'A'; l2 <= 'Z'; l2++) {
          for (l3 = 'A'; l3 <= 'Z'; l3++) {
            printf("BH %d%d %c%c%c", c1, c2, l1, l2, l3);
            printf("\n");
            numere++;
          }
        }
      }
    }
  }

  printf("Am tiparit %d numere de masina.", numere);
  return 0;
}
