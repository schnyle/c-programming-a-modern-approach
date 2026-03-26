// Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v = 4/3Πr^3. Write the
// fraction 4/3 as 4.0f/3.0f. (Trying writing it as 4/3. What happends?) Hint: C doesn't have an exponentiation
// operator, so you'll need to multiply r by itself twice to compute r^3.

#include <stdio.h>

#define PI 3.14159265358979323846

int main()
{
  double radius = 15.4;
  double volume = 4.0f / 3.0f * PI * radius * radius * radius;

  printf("Sphere volume: %.2lf\n", volume);

  return 0;
}
