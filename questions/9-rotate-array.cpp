#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/rotate-array/
void rotate(vector<int> &nums, int k) {
  int n = nums.size();
  vector<int> ans(n);

  for (int i = 0; i < n; i++) {
    int newIndex = (i + k) % n;
    ans[newIndex] = nums[i];
  }

  nums = ans;
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;

  rotate(nums, k);

  // [5,6,7,1,2,3,4]
  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }

  return 0;
}
