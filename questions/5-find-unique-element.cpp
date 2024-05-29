#include <iostream>
using namespace std;
#include <limits.h>

int findUniqueElement(int arr[], int size) {
  int ans = 0;
  for (int i = 0; i < size; i++) {
    ans = ans ^ arr[i];
  }

  return ans;
}

int main() {

  int arr[9] = {2, 10, 11, 10, 2, 13, 13, 15, 11};

  int ans = findUniqueElement(arr, 9);
  cout << "Unique Element: " << ans << endl;

  return 0;
}