#include<bits/stdc++.h>
using namespace std;

int main() {
  /*
  Minimum elements get placed at front of the array after each pass.
  Intuition:
  1. Run outer loop from start to end for each pass
  2. Set minimum as start
  3. Run inner loop from outer loop's starting point to end
     - Find for minimum element from the whole list
     - If current element < minimum element set minimum as current element
     - Swap the outer loop's starting point and minimum
  4. Repeat this for all passes
  5. Print the sorted array

  Time Complexity: O(n^2) - Average and Worst case & O(n) - Best case
  Space Complexity: O(1)
  */

  int arr[] = {13, 46, 24, 52, 20, 9};
  int n = sizeof(arr) / sizeof(int);

  cout << "\nUnsorted array: ";
  for(auto it : arr) {
    cout << it << " ";
  }

  // Outer loop for Passes
  for (int i = 0; i < n; i++) {
    int min = i;
    // Inner loop for finding minimum in each pass
    for (int j = i; j < n; j++) {
      if(arr[j] < arr[min]) {
        // Set the minimum as J
        min = j;
      }
    }
    // Swap the minimum to front
    int tmp = arr[i];
    arr[i] = arr[min];
    arr[min] = tmp;
    // Printing array after this pass
    cout << "\nArray after pass " << (i + 1) << ": ";
    for(auto it : arr)
      cout << it << " ";
  }

  cout << "\nSorted array: ";
  for(auto it : arr)
    cout << it << " ";
  return 0;
}