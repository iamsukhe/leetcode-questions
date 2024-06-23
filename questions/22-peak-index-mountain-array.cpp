#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
int peakIndexInMountainArray(vector<int> &arr) {
  int s = 0;
  int e = arr.size() - 1;

  while (s < e) {

    int mid = s + (e - s) / 2; // index of middle element
    if (arr[mid] > arr[mid + 1]) {
      e = mid; // It may be peak index
    } else if (arr[mid] < arr[mid + 1]) {
      s = mid + 1;
    }
  }

  return s;
}

int main() {

  vector<int> nums = {0, 2, 1, 0};

  int ans = peakIndexInMountainArray(nums);

  cout << "Peak Element Index: " << ans << endl;

  return 0;
}
