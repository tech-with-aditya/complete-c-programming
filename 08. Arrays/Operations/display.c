#include <stdio.h>
#include <stdlib.h>
int a[100], size, i;

void create() {
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  printf("Enter the elements of the array: ");
  for(i = 0; i < size; i += 1) {
    scanf("%d", &a[i]);
  }
}

void display() {
  printf("Elements in the array: ");
  for(i = 0; i < size; i += 1) {
    printf("%d ", a[i]);
  }
}

void main() {
  create();
  display();
}
