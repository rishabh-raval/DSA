#include<bits/stdc++.h>
using namespace std;

int main() {
  /*
  To check whether the array is sorted or not ?
  Simple intuition: No need to write
  TC: O(n) - single pass
  */
  int arr[] = {1, 2, 2, 3, 3, 4};
  int n = sizeof(arr) / sizeof(int);
  int arr2[] = {1, 2, 1, 3, 4};
  int n2 = sizeof(arr) / sizeof(int);

  for (int i = 1; i < n; i++) {
    if(arr[i] >= arr[i-1])
      continue;
    else {
      cout << "\nArray 1 not sorted.";
      break;
    }
  }

  for (int i = 1; i < n2; i++) {
    if(arr2[i] >= arr2[i-1])
      continue;
    else {
      cout << "\nArray 2 not sorted.";
      break;
    }
  }
    return 0;
}