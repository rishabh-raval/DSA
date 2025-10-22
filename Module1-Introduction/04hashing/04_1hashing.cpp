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
  /*
  Hash array stores the frequency of elements in the primary array. (also called frequency array)
  It has highest index = maximum number in the array. [If highest number is 13 then hash array size = 14 so as to get the index 13 in hash array]
  */
  int hash[13] = {0}; 
  for (int i = 0; i < n; i++) {
    hash[arr[i]]++;
  }

  for (int i = 0; i < n; i++) {
    cout << i << " appeared " << hash[i] << " times.\n";
  }

  return 0;
}