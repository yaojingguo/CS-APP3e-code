#include <stdio.h>

int sum(int x, int y) 
{
  return x + y;
}

void inplace_swap(int *x, int *y)
{
  *y = *x ^ *y;
  *x = *x ^ *y;
  *y = *x ^ *y;
}

void p2_12() {
  int x = 0x87654321;
  printf("0x%X\n", (~x & 0xFFFFFF00) | (x & 0xFF));
}

int main(int argc, char *argv[])
{
  p2_12();
  return 0;
}
