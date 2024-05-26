nt setKthBit(int N, int K) {
  // Write Your Code here
  int mask = 1 << K;
  int ans = N | mask;
  return ans;
}
int main() {

  int ans = setKthBit(10, 2);

  cout << ans << endl;
  return 0;
}