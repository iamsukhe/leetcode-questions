#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/sort-colors/
int main() {
  vector<int> nums = {2, 0, 2, 1, 1, 0};

  int i = 0;
  int j = nums.size() - 1;

  int index = 0;

  while (index <= j) {
    if (nums[index] == 0) {
      swap(nums[index], nums[i]);
      i++;
      index++;
    }

    else if (nums[index] == 2) {
      swap(nums[index], nums[j]);
      j--;
      // Catch -> No need of inedex++ in case of 2
      // index++
    } else {
      index++;
    }
  }

  for (int k = 0; k < nums.size(); k++) {
    cout << nums[k] << " ";
  }

  return 0;
}
