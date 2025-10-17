#include<bits/stdc++.h>
using namespace std;

int pivot_getter(int arr[], int low, int high) {
  int pivot = arr[low];
  int i = low;
  int j = high;
  while(i < j) {
    while(arr[i] <= pivot && i <= high - 1)
      i++;
    while(arr[j] > pivot && j >= low + 1)
      j--;
    if(i < j) {
      int tmp = arr[i];
      arr[i] = arr[j];
      arr[j] = tmp;
    }
  }
  int tmp = arr[low];
  arr[low] = arr[j];
  arr[j] = tmp;
  return j;
}

void quickSort(int arr[], int low, int high) {
  if(low < high) {
    int partition_index = pivot_getter(arr, low, high);
    quickSort(arr, low, partition_index - 1);
    quickSort(arr, partition_index + 1, high);
  }
}

int main() {
  int arr[] = {4, 6, 2, 5, 7, 9, 1, 3};
  int high = sizeof(arr) / sizeof(int) - 1;
  cout << "\nUnsorted array: ";
  for(auto it : arr)
    cout << it << " ";

  quickSort(arr, 0, high);

  cout << "\nSorted array: ";
  for(auto it : arr)
    cout << it << " ";
  return 0;
}