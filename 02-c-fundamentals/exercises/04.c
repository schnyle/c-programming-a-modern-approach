// Write a program that declares several int and float variables - without initializing them - and then prints their
// values. Is there any pattern to the values? (Usually there isn't).

#include <stdio.h>

int main(void)
{
  int i, j, k;
  float x, y, z;

  printf("Value of i: %d\n", i);
  printf("Value of j: %d\n", j);
  printf("Value of k: %d\n", k);

  printf("Value of x: %f\n", x);
  printf("Value of y: %f\n", y);
  printf("Value of z: %f\n", z);
}

// they are all zero
