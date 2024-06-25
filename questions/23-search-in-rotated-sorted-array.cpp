#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/search-in-rotated-sorted-array/description/
int findMinimumElementIndex(vector<int> &nums) {
  int s = 0;
  int N = nums.size();
  int e = N - 1;

  if (nums[s] <= nums[e]) {
    return 0;
  }

  while (s <= e) {

    //  if(nums[s]<=nums[e]){
    //     return s;
    // }

    int mid = s + (e - s) / 2; // index of middle element

    if (nums[mid] >= nums[(mid + N - 1) % N] &&
        nums[mid] >= nums[(mid + 1) % N]) {
      return mid + 1;
    } else if (nums[mid] <= nums[(mid + N - 1) % N] &&
               nums[mid] <= nums[(mid + 1) % N]) {
      return mid;
    } else if (nums[s] <= nums[mid]) {
      s = mid + 1;
    } else {
      e = mid - 1;
    }
  }

  return -1;
}

int binarySearch(vector<int> &nums, int target, int s, int e) {
  while (s <= e) {

    int mid = s + (e - s) / 2; // index of middle element

    if (nums[mid] == target) {
      return mid;
    } else if (nums[mid] < target) {
      s = mid + 1;
    } else {
      e = mid - 1;
    }
  }

  return -1;
}

int search(vector<int> &nums, int target) {
 
  int end = (nums.size() - 1);

  int minimumIndex = findMinimumElementIndex(nums);

  cout << minimumIndex;

  int ans = binarySearch(nums, target, 0, minimumIndex - 1);

  if (ans == -1) {
    ans = binarySearch(nums, target, minimumIndex, end);
  }

  return ans;
}

int main() {

  vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

  int ans = search(nums, 5);

  cout << "Rotated Sorted Array Index: " << ans << endl;

  return 0;
}
