#include<bits/stdc++.h>
using namespace std;

int main() {

  /*
  Finding maximum and minimum element in unordered map
  */

  int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5};
  int n = sizeof(arr) / sizeof(int);

  // Pre-compute
  unordered_map<int, int> umpp;
  for (int i = 0; i < n; i++) {
    umpp[arr[i]]++;
  }

  // Printing map
  for (auto it: umpp) {
    cout << it.first << ": " << it.second << "\n";
  }

  // Finding maximum and minimum element
  int max = 0, min = umpp[1], maxElem = 0, minElem = umpp[1];
  for(auto it : umpp) {
    if(it.second > max) {
      max = it.second;
      maxElem = it.first;
    } 
    if(it.second < min) {
      min = it.second;
      minElem = it.first;
    }
  }

  cout << "\nMaximum key: " << maxElem << " and Maximum value: " << max;
  cout << "\nMinimum key: " << minElem << " and Minimum value: " << min;

  return 0;
}