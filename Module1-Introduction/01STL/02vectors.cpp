#include<bits/stdc++.h>
using namespace std;

int main() {
  // vector<int> v;
  // v.push_back(1);
  // v.emplace_back(2);

  // vector<pair<int, int>> vec;
  // vec.push_back({1, 2});
  // vec.emplace_back(3, 4);

  // vector<int> v1(5, 100);
  // vector<int> v2(5);
  // vector<int> v3(5, 20);
  // vector<int> v4(v1);

  // cout << "\nPrinting vector v:";
  // for(auto it : v)
  //   cout << it << " ";

  // cout << "\nPrinting vector vec: ";
  // for(auto it : vec)
  //   cout << it.first << " | " << it.second << " ";

  // cout << "\nPrinting vector v1: ";
  // for(auto it : v1)
  //   cout << it << " ";

  // cout << "\nPrinting vector v2: ";
  // for(auto it : v2) 
  //   cout << it << " ";

  // cout << "\nPrinting vector v3: ";
  // for(auto it : v3)
  //   cout << it << " ";

  // cout << "\nPrinting vector v4: ";
  // for(auto it : v4) 
  //   cout << it << " ";

  vector<int> v;

  for (int i = 1; i <= 10; i++)
    v.emplace_back(i);

  cout << "\nThe elements in the vector: ";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << *it << " ";

  cout << "\nThe front element of the vector: " << v.front();
  cout << "\nThe last element of the vector: " << v.back();
  cout << "\nThe size of the vector: " << v.size();
  v.pop_back();

  cout << "\nPrinting the last element after removing the last element: ";
  for(auto it : v)
    cout << it << " ";

  cout << "\nInserting 0 at beginning: ";
  v.insert(v.begin(), 0);
  cout << "\nThe first element is: " << v[0];
  cout << "\nErasing the first element: ";
  v.erase(v.begin());
  cout << "\nNow the first element is: " << v[0];

  if (v.empty()) 
    cout << "\nVector is empty.";
  else
    cout << "\nVector is not empty.";

  v.clear();
  cout << "\nSize of vector after clearing it: " << v.size();
  return 0;
}