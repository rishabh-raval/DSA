#include<bits/stdc++.h>
using namespace std;

int main() {
  /*
  - Map stores key value pairs in sorted order, where key should be unique.
  */
  // map<int, int> map1;
  // map<int, pair<int, int>> map2;
  // map<pair<int, int>, int> map3;

  // map1[1] = 2; // Stores {1 : 2}
  // map1.emplace(3, 1); // Stores {3 : 1}
  // map1.insert({4, 3}); // Stores {4 : 3}

  // for(auto it : map1) {
  //   cout << it.first << " : " << it.second << "\n";
  // }

  // cout << map1[5]; // Returns 0 as there is nothing as key 5.

  // //Upper bound and lower bound
  // auto it = map1.lower_bound(3);
  // cout << "\nLower bound of key 3: " << (map1.lower_bound(3)->first); 
  // cout << "\nUpper bound of key 3: " << (map1.upper_bound(3)->first);
  // cout << "\nLower bound of key 1: " << (map1.lower_bound(1)->first);
  // cout << "\nUpper bound of key 1: " << (map1.upper_bound(1)->first);
  // cout << "\nLower bound of key 4: " << (map1.lower_bound(4)->first);
  // cout << "\nUpper bound of key 4: " << (map1.upper_bound(4)->first);

  map<int, int> mp;
  for (int i = 1; i <= 5; i++)
    mp.emplace(i, i * 10);

  cout << "\nElements present in map mp: ";
  for(auto it : mp)
    cout << "\n" << it.first << "\t" << it.second;

  int n = 2;
  if(mp.find(n) != mp.end())
    cout << "\n" << n << " is present in map mp.";

  mp.erase(mp.begin());
  cout << "\nElements after deleting the first element: ";
  cout << "\nKey\tElement";
  for(auto it : mp)
    cout << "\n" << it.first << "\t" << it.second;

  cout << "\nThe size of the map is: " << mp.size();
  return 0;
}