#include<bits/stdc++.h>
using namespace std;

void number_hash() {
  int arr[] = {1, 2, 3, 1, 3, 2, 12};
  int n = sizeof(arr) / sizeof(int);

  // Pre-compute
  map<int, int> mpp;
  for (int i = 0; i < n; i++) {
    mpp[arr[i]]++;
  }

  // Fetch
  for (auto it : mpp) {
    cout << it.first << " appeared " << it.second << " times." << "\n";
  }
}

void char_hash() {
  string str = "absrABSR";
  
  // Pre-compute
  map<char, int> mpp;
  for (int i = 0; i < str.length(); i++) {
    mpp[str[i]]++;
  }

  // Fetch
  for(auto it : mpp) {
    cout << it.first << " appeared " << it.second << " times." << "\n";
  }
}

int main() {
  // Pre-computing and Fetching in Map have Time Complexity(Avg, Best and Worst) of O(log n).
  number_hash();
  char_hash();

  return 0;
}