#include <iostream> 
using namespace std;

int main() {
  int arr[7] = {23, -22, -7, 4, -17, -11, 5};

  int j = 0;

  for (int i = 0; i < 7; i++) {
    if (arr[i] < 0) {
      swap(arr[i], arr[j]);
      j++;
    }
  }

  for (int i = 0; i < 7; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
