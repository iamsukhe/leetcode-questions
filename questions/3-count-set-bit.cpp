#include <iostream>
using namespace std;

int countSetBit(int N) {
  int count = 0;

  while (N > 0) {
    if (N & 1) {
      count++;
    }
    N = N >> 1;
  }
  return count;
}
int main() {

  int ans = countSetBit(7);

  cout << ans << endl;
  return 0;
}