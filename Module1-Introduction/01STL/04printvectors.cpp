#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v = {10, 20, 30};
  // conventional way
  cout << "\nUsing conventional way: ";
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
  }

  // using auto keyword which eliminates "vector<int>::iterator"
  cout << "\nAuto keyword to eliminate long 'vector<int>::iterator' syntax: ";
  for (auto it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
  }

  // Using simple auto keyword
  cout << "\nUsing for each: ";
  for(auto it : v) {
    cout << it << " ";
  }

  return 0;
}