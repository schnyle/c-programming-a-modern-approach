// What output do the following calls of printf produce?

#include <stdio.h>

int main(void)
{
  printf("%6d,%4d", 86, 1040); // ••••86,1040
  printf("\n");
  printf("%12.5e", 30.253); // ••••••••3.253e-1
  printf("\n");
  printf("%.4f", 83.162); // 83.1620
  printf("\n");
  printf("%-6.2g", .0000009979); // •••9.97e-7
  printf("\n");
}
