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

void p2_14() {
  int x = 0x66;
  int y = 0x39;

  printf("x & y: %x\n", x & y);
  printf("x | y: %x\n", x | y);
  printf("~x | ~y: %x\n", ~x | ~y);
  printf("x & !y: %x\n", x & !y);


  printf("\n");

  printf("x && y: %x\n", x && y);
  printf("x || y: %x\n", x || y);
  printf("!x || !y: %x\n", !x || !y);
  printf("x && ~y: %x\n", x && ~y);

}

int main(int argc, char *argv[])
{
  p2_14();
  return 0;
}
