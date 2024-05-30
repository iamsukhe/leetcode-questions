#include <iostream>
using namespace std;
#include <limits.h>

void sortZeroAndOnce(int arr[], int size) {
  int l = 0;
  int h = size - 1;
  ;

  while (l <= h) {

    if (arr[l] == 1 && arr[h] == 0) {
      // swap
      int temp = arr[l];
      arr[l] = arr[h];
      arr[h] = temp;
      l++;
      h--;
    }

    if (arr[l] == 0) {
      l++;
      continue;
    }

    if (arr[h] == 1) {
      h--;
      continue;
    }
  }
}

int main() {

  int arr[9] = {1, 0, 1, 0, 1, 0, 1, 0, 1};

  sortZeroAndOnce(arr, 9);

  for (int i = 0; i < 9; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}