#include <stdio.h>

void main() {
  int a, b, temp;
    
  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);
    
  printf("\nNumbers before swap: ");
  printf("%d %d", a, b);
    
  temp = a;
  a = b;
  b = temp;
    
  printf("\nNumbers after swap: ");
  printf("%d %d", a, b);
}
