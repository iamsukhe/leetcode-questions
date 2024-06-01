#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/two-sum/
vector<int> twoSum(vector<int> &nums, int target) {

  vector<int> v = nums;

  sort(v.begin(), v.end());

  int num1;
  int num2;

  int s = 0;
  int e = v.size() - 1;

  while (s < e) {
    if ((v[s] + v[e]) == target) {
      num1 = v[s];
      num2 = v[e];
      break;
    }

    if ((v[s] + v[e]) > target) {
      e--;
    }

    if ((v[s] + v[e]) < target) {
      s++;
    }
  }

  vector<int> ans = {};
  ;

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == num1) {
      ans.push_back(i);
    } else if (nums[i] == num2) {
      ans.push_back(i);
    }
  }

  return ans;
}

int main() {
  vector<int> nums = {3, 2, 4};
  int target = 6;

  vector<int> ans = twoSum(nums, target);

  for (int k = 0; k < ans.size(); k++) {
    cout << ans[k] << " ";
  }

  return 0;
}
