// Count 0's and 1's in an array
#include <iostream>
using namespace std;
#include <limits.h>

void countZeroOne(int arr[], int size) {
  int zeroCount = 0;
  int onesCount = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] == 1) {
      onesCount++;
    } else if (arr[i] == 0) {
      zeroCount++;
    }
  }

  cout << "zeroCount:" << zeroCount << endl;
  cout << "onesCount:" << onesCount << endl;
}

int main() {

  int arr[16] = {1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0};

  countZeroOne(arr, 16);
  return 0;
}