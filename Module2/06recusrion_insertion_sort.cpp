#include<bits/stdc++.h>
using namespace std;

/*
Intuition:
1. Recursively call insertionSort() for each pass
2. Iterate loop for unsorted part (i.e i+1 to last element)
   - If base condition corrects, terminate recursion
   - Else continue
*/

void insertionSort(int arr[], int i, int n) {
  if(i == n)
    return;
  for (int j = i + 1; j > 0; j--) {
    if(arr[j] < arr[j - 1]) {
      int tmp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = tmp;
    }
  }
  insertionSort(arr, i + 1, n);
}

int main() {
  int arr[] = {14, 9, 15, 12, 6, 8, 13};
  int n = sizeof(arr) / sizeof(int);
  cout << "\nUnsorted array: ";
  for(auto it : arr)
    cout << it << " ";

  insertionSort(arr, 1, n);

  cout << "\nSorted array: ";
  for(auto it : arr)
    cout << it << " ";
  return 0;
}