#include <stdio.h>

void main() {
  double length, breadth, perimeter, area;

  printf("Enter the length of the rectangle: ");
  scanf("%lf", &length);
  printf("Enter the breadth of the rectangle: ");
  scanf("%lf", &breadth);

  perimeter = 2 * (length + breadth);
  area = length * breadth;

  // printf("\nThe perimeter of the rectangle is %lf units", perimeter);
  // printf("\nThe area of the rectangle is %lf sq. units", area);

  // using .2f or .2lf to round off double or floating point number upto 2 decimal places
  printf("\nThe perimeter of the rectangle is %.2lf units", perimeter);
  printf("\nThe area of the rectangle is %.2lf sq. units", area);
}
