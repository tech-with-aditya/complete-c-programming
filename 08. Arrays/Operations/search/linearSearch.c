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

void linearSearch() {
  int x;
  printf("\nEnter the element to search: ");
  scanf("%d", &x);
  for(i = 0; i < size; i += 1) {
    if(a[i] == x) {
        printf("Element found at position: %d", i + 1);
        break;
    }
  }
  if(i == size) {
    printf("Element not found in the array!");
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
  linearSearch();
}
