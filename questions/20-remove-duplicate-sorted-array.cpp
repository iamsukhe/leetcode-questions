#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
int removeDuplicates(vector<int> &nums) {
  if (nums.size() == 0) {
    return 0;
  }

  int i = 1;
  int j = 0;

  while (i < nums.size()) {
    if (nums[i] == nums[j]) {
      i++;
    } else {
      j++;
      nums[j] = nums[i];
      i++;
    }
  }

  return j + 1;
}

int main() {

  vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

  int ans = removeDuplicates(nums);

  cout << "Ans: " << ans << endl;

  return 0;
}
