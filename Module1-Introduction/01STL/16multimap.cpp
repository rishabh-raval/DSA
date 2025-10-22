#include<bits/stdc++.h>
using namespace std;

int main() {
  /*
  - Stores duplicate keys and key:value pair in sorted order(sorting on key).
  - Can't use map1[key] as there are many duplicate keys.
  */

  multimap<int, int> mmap;
  mmap.emplace(1, 3);
  mmap.emplace(1, 2);
  mmap.emplace(1, 1);
  mmap.emplace(1, 4);

  cout << "\nInitial Multimap mmap: \n";
  for(auto it : mmap) {
    cout << it.first << " : " << it.second << "\n";
  }

  return 0;
}