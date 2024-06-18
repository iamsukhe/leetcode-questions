#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-two-arrays2408/1
string calc_Sum(int *a, int n, int *b, int m) {
  // Complete the function
  int carry = 0;
  string ans;
  int i = n - 1;
  int j = m - 1;

  while (i >= 0 && j >= 0) {
    int x = a[i] + b[j] + carry;
    int digit = x % 10;
    ans.push_back(digit + '0');
    carry = x / 10;
    i--;
    j--;
  }

  while (i >= 0) {
    int x = a[i] + carry + 0;
    int digit = x % 10;
    ans.push_back(digit + '0');
    carry = x / 10;
    i--;
  }

  while (j >= 0) {
    int x = b[j] + carry + 0;
    int digit = x % 10;
    ans.push_back(digit + '0');
    carry = x / 10;
    j--;
  }

  if (carry) {
    ans.push_back(carry + '0');
  }

  while (ans[ans.size() - 1] == '0') {
    ans.pop_back();
  }

  reverse(ans.begin(), ans.end());

  return ans;
}

int main() {

  int A[] = {0, 9, 0, 0, 3, 5};
  int B[] = {2, 2, 7};

  int n1 = 6;
  int n2 = 3;

  string ans = calc_Sum(A, n1, B, n2);

  cout << "Sum: " << ans << endl;

  return 0;
}
