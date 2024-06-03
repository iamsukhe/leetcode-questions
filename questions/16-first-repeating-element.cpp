#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// https://www.geeksforgeeks.org/problems/first-repeating-element4018/1
int firstRepeated(int arr[], int n) {
  unordered_map<int, int> hash;

  for (int i = 0; i < n; i++) {
    hash[arr[i]]++;
  }

  for (int i = 0; i < n; i++) {
    if (hash[arr[i]] > 1) {
      return i + 1;
    }
  }

  return -1;
}

int main() {
  int n = 7;
  int arr[] = {1, 5, 3, 4, 3, 5, 6};

  int ans = firstRepeated(arr, n);

  cout << "Index: " << ans << " ";
  return 0;
}
