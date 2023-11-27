#include <stdio.h>

void swapper(int* ptra, int* ptrb) {
  int temp = *ptra;
  *ptra = *ptrb;
  *ptrb = temp;
}

int main() {
  int a, b;
  int* ptra, *ptrb;
  scanf("%d %d", &a, &b);
  ptra = &a;
  ptrb = &b;
  printf("values before %d %d\n", a, b);
  swapper(ptra, ptrb);
  printf("values after %d %d\n", a, b);
  return 0;
}

