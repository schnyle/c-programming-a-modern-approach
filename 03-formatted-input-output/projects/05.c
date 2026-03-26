// Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays the numbers in
// a 4 by 4 arrangement, followed by the sums of the rows, columns, and diagonals:
//
// Enter the numbers from 1 to 16 in any order:
// 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
//
// 16  3  2 13
//  5 10 11  8
//  9  6  7 12
//  4 15 14  1
// Row sums: 34 34 34 34
// Column sums: 34 34 34 34
// Diagonal sums: 34 34
//
// If the row, column, and diagonal sums are all the same (as they are in this example), the numbers are said to form a
// magic square. The magic square shown here appears in a 1514 engraving by artist and mathematician Albrecht Durer.
// (Note that the middle numbers in the last row givev the date of the engraving.)

#include <stdio.h>

int main(void)
{
  int nums[16];

  printf("Enter the numbers from 1 to 16 in any order: ");
  for (int i = 0; i < 16; ++i)
  {
    scanf("%d", &nums[i]);
  }

  int row_sums[4] = {0, 0, 0, 0};
  int col_sums[4] = {0, 0, 0, 0};

  for (int i = 0; i < 4; ++i)
  {
    for (int j = 0; j < 4; ++j)
    {
      int val = nums[4 * i + j];

      row_sums[i] += val;
      col_sums[j] += val;
      printf("%2d ", val);
    }
    printf("\n");
  }

  printf("Row sums: ");
  for (int i = 0; i < 4; ++i)
  {
    printf("%d", row_sums[i]);
  }
  printf("\n");

  printf("Column sums: ");
  for (int i = 0; i < 4; ++i)
  {
    printf("%d", col_sums[i]);
  }
  printf("\n");
}
