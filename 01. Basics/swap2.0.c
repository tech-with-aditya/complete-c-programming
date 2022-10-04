#include <stdio.h>

void main() {
  int a, b;
    
  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);
    
  printf("\nNumbers before swap: ");
  printf("%d %d", a, b);
    
  a = a + b;
  b = a - b;
  a = a - b;
    
  printf("\nNumbers after swap: ");
  printf("%d %d", a, b);
}
