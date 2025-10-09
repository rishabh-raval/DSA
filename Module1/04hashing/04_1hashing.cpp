#include<bits/stdc++.h>
using namespace std;

int main() {
  
  int n;
  cout << "\nArray size: ";
  cin >> n;
  int arr[n];
  cout << "\nInput array data: \n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Precompute
  int hash[13] = {0}; // hash array also known as frequency array which stores frequency of elements
  for (int i = 0; i < n; i++) {
    hash[arr[i]]++;
  }

  for (int i = 0; i < n; i++) {
    cout << i << " appeared " << hash[i] << " times.\n";
  }

  return 0;
}