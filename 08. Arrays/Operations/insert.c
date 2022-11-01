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

void insert() {
  int pos, val;
  printf("\nEnter the position: ");
  scanf("%d", &pos);
  printf("Enter the element: ");
  scanf("%d", &val);
  for(i = size - 1; i >= pos - 1; i -= 1) {
    a[i + 1] = a[i];
  }
  a[pos - 1] = val;
  size += 1;
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
  insert();
  display();
}
