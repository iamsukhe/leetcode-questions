#include <iostream>
using namespace std; 

// Link - https://www.geeksforgeeks.org/problems/set-kth-bit3724/1
int setKthBit(int N, int K) {
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

/* 
* Setting the K-th Bit of a Number
* Objective:
* Set the K-th bit of a given number to 1.
*
* Key Concepts:
*
* Binary Representation:
*
* Numbers are represented in binary (base-2).
* Each digit in binary is called a bit.
* Bit Position:
*
* Bit positions start from 0 (rightmost bit is position 0).
* Bitwise OR Operation (|):
*
* Compares each bit of two numbers.
* Resulting bit is 1 if either bit is 1.
* Creating the Mask:
*
* Shift 1 left by K positions to create a mask.
* Mask has a 1 at the K-th position and 0s elsewhere.
* Applying the Mask:
*
* Use the OR operation to set the K-th bit of the original number.
* Example:
*
* Original number: 10 (binary 1010)
* K-th bit to set: 2
* Steps:
*
* Create mask: 1 << 2 = 100 (binary) or 4 (decimal)
* Apply mask: 1010 | 0100 = 1110 (binary) or 14 (decimal)
*/