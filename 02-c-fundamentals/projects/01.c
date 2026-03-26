// Write a program that uses printf to display the following picture on the screen:
//        *
//       *
//      *
// *   *
//  * *
//   *

#include <stdio.h>

#define HEIGHT 6
#define WIDTH 8

int main()
{
  for (int i = 0; i < HEIGHT; ++i)
  {
    for (int j = 0; j < WIDTH; ++j)
    {
      int draw = 0;

      if (j == (WIDTH - 1) - i)
      {
        printf("*");
        draw = 1;
      }

      if (!draw && i >= HEIGHT / 2 && j == i - HEIGHT / 2)
      {
        printf("*");
        draw = 1;
      }

      if (!draw)
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}
