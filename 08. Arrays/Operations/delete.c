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

void delete() {
  int pos;
  printf("\nEnter the position: ");
  scanf("%d", &pos);
  for(i = pos - 1; i < size; i += 1) {
    a[i] = a[i + 1];
  }
  size -= 1;
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
  delete();
  display();
}
