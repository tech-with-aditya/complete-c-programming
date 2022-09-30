#include <stdio.h>

void main()
{
  double length, breadth, pm, area;
    
  printf("Enter the length of the triangle: ");
  scanf("%lf", &length);
  printf("Enter the breadth of the triangle: ");
  scanf("%lf", &breadth);
    
  pm = 2 * (length + breadth);
  area = length * breadth;
    
  // printf("\nThe perimeter of the triangle is %lf units", pm);
  // printf("\nThe area of the triangle is %lf sq. units", area);
    
  // using .2f or .2lf to round off double or floating point number upto 2 decimal places
  printf("\nThe perimeter of the triangle is %.2lf units", pm);
  printf("\nThe area of the triangle is %.2lf sq. units", area);
}
