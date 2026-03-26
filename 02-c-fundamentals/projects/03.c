// Modify the program of Programming Project 2 so that it prompts the user to enter the radius of the sphere.

#include <stdio.h>

#define PI 3.14159265358979323846

int main()
{
  double radius;

  printf("Enter sphere radius: ");
  scanf("%lf", &radius);

  double volume = 4.0f / 3.0f * PI * radius * radius * radius;
  printf("Sphere volume: %.2lf\n", volume);

  return 0;
}
