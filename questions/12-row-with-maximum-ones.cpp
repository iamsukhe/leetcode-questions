#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

// https://leetcode.com/problems/row-with-maximum-ones/description/
vector<int> rowAndMaximumOnes(vector<vector<int>> &mat) {
  int oneCount = INT_MIN;
  int rowNo = -1;
  vector<int> ans;

  for (int i = 0; i < mat.size(); i++) {
    int count = 0;
    for (int j = 0; j < mat[i].size(); j++) {
      if (mat[i][j] == 1) {
        count++;
      }
    }

    if (count > oneCount) {
      oneCount = count;
      rowNo = i;
    }
  }

  ans.push_back(rowNo);
  ans.push_back(oneCount);

  return ans;
}

int main() {
  vector<vector<int>> mat = {{0, 1}, {1, 1}, {0,0}};

  vector<int> ans = rowAndMaximumOnes(mat);

  for (int k = 0; k < ans.size(); k++) {
    cout << ans[k] << " ";
  }

  return 0;
}
