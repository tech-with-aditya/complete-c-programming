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

void append() {
  int usize;
  printf("\nHow many more elements do you wish to append in the array: ");
  scanf("%d", &usize);
  printf("Enter the elements to append in the array: ");
  for(i = size; i < size + usize; i += 1) {
    scanf("%d", &a[i]);
  }
  size = size + usize;
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
  append();
  display();
}
