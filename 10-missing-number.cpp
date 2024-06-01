#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/missing-number/
int missingNumber(vector<int> &nums) {

  int n = nums.size();

  int tsum = n * (n + 1) / 2;

  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum = sum + nums.at(i);
  }

  return tsum - sum;
}

int main() {
  vector<int> nums = {3, 0, 1};

  int ans = missingNumber(nums);

  cout << "Ans: " << ans;

  return 0;
}
