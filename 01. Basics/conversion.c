#include <stdio.h>

void main() {
  double cm, mm, m, km;
  
  printf("Enter length in centimeter: ");
  scanf("%lf", &cm);
  
  mm = cm * 10;
  m = cm / 100;
  km = cm / 100000;
  
  printf("\nThe length in millimeter is %.2lf mm", mm);
  printf("\nThe length in meter is %.2lf m", m);
  printf("\nThe length in kilometer is %.2lf km", km);
}
