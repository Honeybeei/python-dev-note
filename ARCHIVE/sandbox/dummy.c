#include <stdio.h>

int* generator(int n) {
  static int i = 0;
  static int arr[10];
  for (i = 0; i < n; i++) {
    arr[i] = i;
  }
  return arr;
}

int main() {
  int* gen = generator(10);
  for (int i = 0; i < 10; i++) {
    printf("%d\n", gen[i]);
  }
  return 0;
}