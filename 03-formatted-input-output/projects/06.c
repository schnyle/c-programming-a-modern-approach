// Modify the addfrac.c program of Section 3.2 so that the user enters both fractions at the same time, separated by a
// plus sign:
//
// Enter two fractions separated by a plus sign: 5/6+3/4
// The sum is 38/24

#include <stdio.h>

int main(void)
{
  int n1, d1, n2, d2, nr, dr;

  printf("Enter two fractions separated by a plus sign: ");
  scanf("%d/%d+%d/%d", &n1, &d1, &n2, &d2);

  nr = n1 * d2 + n2 * d1;
  dr = d1 * d2;

  printf("The sum is %d/%d\n", nr, dr);
}
