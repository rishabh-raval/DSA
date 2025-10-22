#include<bits/stdc++.h>
using namespace std;

int main() {

  /*
  Intuition:
  1. Run outer loop from start to last elements for each pass
  2. Run inner loop from start+1 to last element
     - Check whether all previous elements are greater than selected element
     - If YES swap them until the correct position is finded (No more previous elems are greater than selected elem)
     - else continue
  3. Repeat above steps for all passes
  4. Print the sorted array

  Time Complexity: O(n^2) - Worst and Avg case & O(n) for Best case
  Space complexity: O(1)
  */

  int arr[] = {14, 9, 15, 12, 6, 8, 13};
  int n = sizeof(arr) / sizeof(int);
  cout << "\nUnsorted array: ";
  for(auto it : arr)
    cout << it << " ";

  // Outer loop for each pass
  for (int i = 0; i < n; i++) {
    // Inner loop for inserting in correct order
    for (int j = i + 1; j > 0; j--) {
      // Check for previous and current element
      if(arr[j] < arr[j - 1]) {
        // Swap the elements
        int tmp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = tmp;
      }
    }
    cout << "\nArray after pass " << (i + 1) << ": ";
    for(auto it : arr)
      cout << it << " ";
  }

  cout << "\nSorted array: ";
  for(auto it : arr)
    cout << it << " ";

  return 0;
}