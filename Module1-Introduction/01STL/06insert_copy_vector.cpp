#include<bits/stdc++.h>
using namespace std;

int main() {

  vector<int> v(2, 100);
  cout << "\nInitial vector: ";
  for(auto it : v)
    cout << it << " ";

  cout << "\nInserting using (location, value) syntax: ";
  v.insert(v.begin(), 300);
  for(auto it : v)
    cout << it << " ";

  cout << "\nInserting using (location, instance, value) syntax: ";
  v.insert(v.begin()+1, 3, 326);
  for(auto it : v)
    cout << it << " ";

  vector<int> copy(2, 50);
  cout << "\nInitial copy vector: ";
  for(auto it : copy)
    cout << it << " ";

  v.insert(v.begin(), copy.begin(), copy.end());
  cout << "\nCopying a vector 'copy' in vector 'v'.. : ";
  for(auto it : v)
    cout << it << " ";

  cout << "\nSize of vector v: " << v.size();
  v.pop_back();
  cout << "\nRemoving last element using pop_back(): ";
  for(auto it:v)
    cout << it << " ";

  vector<int> v1(5, 500);
  vector<int> v2(4, 400);
  cout << "\nInitial vector v1: ";
  for(auto it : v1)
    cout << it << " ";
  cout << "\nInitial vector v2: ";
  for(auto it : v2)
    cout << it << " ";

  v1.swap(v2);
  cout << "\nVector v1 after swap: ";
  for(auto it : v1)
    cout << it << " ";
  cout << "\nVector v2 after swap: ";
  for(auto it : v2)
    cout << it << " ";

  v1.clear();
  cout << "\nClearing the whole vector v1..";

  cout << "\nIs vector v1 empty ? " << v1.empty(); // 1 - empty AND 0 - no empty
  cout << "\nIs vector v2 empty ? " << v2.empty();
  cout << "\nIs vector v empty ? " << v.empty();
  return 0;
}