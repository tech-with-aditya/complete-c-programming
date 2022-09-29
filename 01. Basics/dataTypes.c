#include <stdio.h>

void main() {
  int n;
  float f;
  char c;
  double d;
  
  printf("Enter a character: ");
  scanf("%c", &c);
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Enter a floating point number: ");
  scanf("%f", &f);
  printf("Enter a decimal number: ");
  scanf("%lf", &d);
  
  printf("\nInteger: %d", n);
  printf("\nFloating point number: %f", f);
  printf("\nCharacter: %c", c);
  printf("\nDecimal number: %lf", d);
}
