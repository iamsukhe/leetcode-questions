#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/find-the-duplicate-number/
int findDuplicate(vector<int> &nums) {

  // Negative marking solution
  // int ans = -1;

  // for (int i = 0; i < nums.size(); i++)
  // {
  //     if (nums[abs(nums[i])] < 0)
  //     {
  //         ans = abs(nums[i]);
  //         break;
  //     }
  //     nums[abs(nums[i])] = -nums[abs(nums[i])];
  // }

  // return ans;

  // Positioning Mathod
  while (nums[0] != nums[nums[0]]) {
    swap(nums[0], nums[nums[0]]);
  }

  return nums[0];
}

int main() {
  vector<int> nums = {3, 3, 3, 3, 3};

  int ans = findDuplicate(nums);

  cout << ans << " ";
  return 0;
}
