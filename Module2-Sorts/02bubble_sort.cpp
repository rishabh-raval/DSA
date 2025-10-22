#include<bits/stdc++.h>
using namespace std;

int main() {
  /*
  Maximum elements gets bubbled up after running of each pass.
  Intuition:
  1. Run outer loop from last elem to first element
  2. Run nested loop from first elem to outer loop's current elem (last -> last-1 -> last-2 and so on)
     - Check whether current elem is greater than next elem.
     - If yes then swap them
     - If no continue
  3. Repeat this until all passes are not completed.
  4. Print the sorted array

  Time complexity: O(n^2) - Worst and Average case and O(n) - Best case
  Space complexity: O(1)
  */

  int arr[] = {13, 46, 24, 52, 20, 9};
  int n = sizeof(arr) / sizeof(int);

  // Outer loop for each pass
  for (int i = n - 1; i > 0; i--) {
    int cnt = 0; // For monitoring total swaps done in each pass
    // Inner loop for forwarding maximum element 
    for (int j = 0; j < i; j++) {
      // Compare current and next element
      if(arr[j] > arr[j + 1]) {
        // If condition satisfies -> swap elements.
        int tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
        cnt++; // Increment the swap counter
      }
    }
    cout << "\nTotal swaps done in pass " << (n - i) << ": " << cnt;
    cout << "\nArray after pass " << (n - i) << ": ";
    for(auto it : arr) {
      cout << it << " ";
    }
  }

    return 0;
}