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

int recBinarySearch(int a[], int start, int end, int x) {
  int mid;
  if(start <= end) {
        mid = start + (end - start) / 2;
        if(a[mid] == x) {
            return mid + 1;
        }
        if(a[mid] > x) {
            return recBinarySearch(a, start, mid - 1, x);
        }
        else {
            return recBinarySearch(a, mid + 1, end, x);
        }
        return -1;
  }
}

void result() {
  int x;
  printf("\nEnter the element to search: ");
  scanf("%d", &x);
  int target = recBinarySearch(a, 0, size - 1, x);
  printf("Element found at position: %d", target);
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
  result();
}
