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

void binarySearch() {
  int x, start, mid, end;
  start = 0;
  end = size - 1;
  printf("\nEnter the element to search: ");
  scanf("%d", &x);
  while(start <= end) {
        mid = start + (end - start) / 2;
        if(a[mid] < x) {
            start = mid + 1;
        }
        else if(a[mid] == x) {
            printf("Element found at position: %d", mid + 1);
            break;
        }
        else {
            end = mid - 1;
        }
    }
    if(start > end) {
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
  binarySearch();
}
