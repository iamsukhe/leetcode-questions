#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/maximum-average-subarray-i/
double findMaxAverage(vector<int> &nums, int k) {

  int sum = 0;
  int i = 0;
  int j = k - 1;

  for (int y = 0; y <= j; y++) {
    sum += nums[y];
  }

  int maxSum = sum;
  j++;
  while (j < nums.size()) {
    sum -= nums[i++];
    sum += nums[j++];
    maxSum = max(maxSum, sum);
  }

  return (maxSum / (double)k);
}

int main() {

  vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  int k = 4;

  double ans = findMaxAverage(nums, k);

  cout << "Ans: " << ans << endl;

  return 0;
}
