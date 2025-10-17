#include<bits/stdc++.h>
using namespace std;

/*
Intuition:
1. First we will recursively call the function for each passes.
2. Rest of the implementation i.e checking/swapping will be done in function itself 
*/

void bubbleSort(int arr[], int i) {
  // Base condition: if all passes done terminate the recursion
  if(i <= 0)
    return;
  // Loop from 0 to unsorted elements (i.e last/last-second.. and so on)
  for (int j = 0; j < i; j++) {
    // Swap logic
    if(arr[j] > arr[j+1]) {
      int tmp = arr[j];
      arr[j] = arr[j + 1];
      arr[j + 1] = tmp;
    }
  }
  // A pass is completed.
  // Call bubbleSort recursively with i-1
  // to denote that the pass is completed.
  bubbleSort(arr, i - 1);
}

int main() {
  int arr[] = {13, 46, 24, 52, 20, 9};
  int n = sizeof(arr) / sizeof(int);
  cout << "\nUnsorted array: ";
  for(auto it : arr)
    cout << it << " ";

  bubbleSort(arr, n-1);
  cout << "\nSorted array: ";
  for(auto it : arr)
    cout << it << " ";

  return 0;
}