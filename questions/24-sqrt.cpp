#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/sqrtx/
int mySqrt(int x) {

  int ans = 0;
  int s = 0;
  int e = x;

  while (s <= e) {
    long long int mid = s + (e - s) / 2;

    if (mid * mid == x) {
      return mid;
    }

    if (mid * mid > x) {
      e = mid - 1;
    } else if (mid * mid < x) {
      ans = mid;
      s = mid + 1;
    }
  }

  return ans;
}

int main() {

  int ans = mySqrt(5);

  cout << "Sqrt: " << ans << endl;

  return 0;
}
