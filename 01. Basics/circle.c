#include <stdio.h>

void main() {
  double radius, diameter, circumference, area;

  printf("Enter the radius of the circle: ");
  scanf("%lf", &radius);

  diameter = 2 * radius;
  circumference = 2 * 3.14 * radius;
  area = 3.14 * (radius * radius);

  printf("\nThe diameter of the circle is %.2lf units", diameter);
  printf("\nThe circumference of the circle is %.2lf units", circumference);
  printf("\nThe area of the circle is %.2lf sq. units", area);
}
