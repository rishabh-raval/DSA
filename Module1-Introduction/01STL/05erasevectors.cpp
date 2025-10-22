#include<bits/stdc++.h>
using namespace std;

int main() {
  // vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150};
  // cout << "\nInitial vector: ";
  // for(auto it : v) {
  //   cout << it << " ";
  // }

  // cout << "\nErasing using single address: ";
  // v.erase(v.begin() + 1);
  // for(auto it : v) {
  //   cout << it << " ";
  // }

  // cout << "\nErasing using (start, end) syntax: ";
  // v.erase(v.begin() + 2, v.begin() + 4);
  // for(auto it : v) {
  //   cout << it << " ";
  // }

  vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150};
  cout << "\nInitial vector: ";
  for(auto it : v) {
    cout << it << " ";
  }

  cout << "\nErasing using single address: ";
  v.erase(v.begin() + 1);
  for(auto it : v) {
    cout << it << " ";
  }

  cout << "\nErasing using (start, end) syntax: ";
  v.erase(v.begin() + 2, v.begin() + 4);
  for(auto it : v) {
    cout << it << " ";
  }
  return 0;
}