#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/rearrange-array-elements-by-sign/
void rearrangeArray(vector<int> &nums) {
  int size = nums.size();

  vector<int> ans(size, 0);
  int posIndex = 0;
  int negIndex = 1;

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] > 0) {
      ans[posIndex] = nums[i];
      posIndex = posIndex + 2;
    } else {
      ans[negIndex] = nums[i];
      negIndex = negIndex + 2;
    }
  }

  nums = ans;
}

int main() {
  vector<int> nums = {3, 1, -2, -5, 2, -4};

  rearrangeArray(nums);

  for (int k = 0; k < nums.size(); k++) {
    cout << nums[k] << " ";
  }

  return 0;
}
