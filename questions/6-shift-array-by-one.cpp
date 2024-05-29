#include <iostream>
using namespace std;
#include <limits.h>

void shiftArrayByOne(int arr[], int size) {
  int temp = arr[size - 1];

  for (int i = size - 1; i > 0; i--) { 
    arr[i] = arr[i - 1];
  }

  arr[0] = temp;
}

int main() {

  int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  shiftArrayByOne(arr, 9);

  for (int i = 0; i < 9; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}