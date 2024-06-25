#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/search-a-2d-matrix/
bool searchMatrix(vector<vector<int>> &matrix, int target) {
  int row = matrix.size();
  int col = matrix[0].size();

  int start = 0;
  int end = (row * col) - 1;

  int mid = start + (end - start) / 2;

  while (start <= end) {
    int rowIndex = mid / col;
    int colIndex = mid % col;

    int element = matrix[rowIndex][colIndex];

    if (element == target) {
      return true;
    } else if (target > element) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }

  return false;
}

int main() {

  vector<vector<int>> nums = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};

  bool ans = searchMatrix(nums, 2);

  cout << "Ans: " << ans << endl;

  return 0;
}
