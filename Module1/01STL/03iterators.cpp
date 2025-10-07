#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> v = {20, 10, 15, 6, 7};
  vector<int>::iterator it = v.begin();

  cout << "\nFirst element of vector v: ";
  cout << *it;
  cout << "\nSecond element of vector v: ";
  it++;
  cout << *it;

  vector<int> v1 = {10, 20, 30, 40};
  cout << "\nLast element of vector v1.end(): ";
  cout << *(--v1.end());

  cout << "\nLast element using v1.back(): ";
  cout << v1.back();

  return 0;
}