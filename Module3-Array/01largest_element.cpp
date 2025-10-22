#include<bits/stdc++.h>
using namespace std;

int main() {
  /* Problem: Find the largest element from the array
  Case: arr[] = {3, 2, 1, 5, 2}
  Output: 5 */

  /* Brute Force approach: 
  1. Apply any optimized sort like merge or quick
  2. The last element would be largest element
  TC: O(nlogn) as merge/quick sort will take nlogn TC.
  We need to optimize nlogn to less linear time. */

  /* Optimal solution:
  1. Initialize first element as maximum
  2. Loop from second element to last element
  3. Check if largest < current element ?
  4. If yes set largest to current element.
  5. Else move the pointer to next element. 
  TC: O(n), which is far better than O(nlogn) */

  int arr[] = {3, 2, 1, 5, 2};
  int largest = arr[0], n = sizeof(arr) / sizeof(int);
  for (int i = 1; i < n; i++) {
    if(largest < arr[i]) {
      largest = arr[i];
    }
  }
  cout << "\nLargest element: " << largest;

  return 0;
}