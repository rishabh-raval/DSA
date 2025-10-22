#include<bits/stdc++.h>
using namespace std;

void printUMAP(unordered_map<int, int>&umap) {
  for(auto it : umap)
    cout << "\n" << it.first << "\t" << it.second;
}

int main() {
  /*
  - Same as simple map but in random order.
  - Similarly no upper bounds and lower bounds available.
  - Worst case TC: O(n) otherwise O(1)
  */

  unordered_map<int, int> umap;
  for (int i = 1; i <= 5; i++)
    umap.emplace(i, i * 10);

  cout << "\nElements in unordered map: ";
  printUMAP(umap);

  int n = 2;
  if(umap.find(n) != umap.end())
    cout << "\n" << n << " is present in unordered map.";

  umap.erase(umap.begin());
  cout << "\nUnordered map after deleting first element: \nKey\tElement";
  printUMAP(umap);

  cout << "\nThe size of the unordered map is: " << umap.size();

  if(!umap.empty())
    cout << "\nUnordered map is not empty.";
  else
    cout << "\nUnordered map is empty.";

  umap.clear();
  cout << "\nSize of the set after clearing all the elements: " << umap.size();

  // unordered_map<int, int> umap{
  //     {1, 2},
  //     {2, 3},
  //     {3, 4},
  //     {4, 5},
  //     {5, 6},
  //     {6, 7},
  //     {7, 8},
  //     {8, 9},
  //     {9, 10}
  // };

  // for (int i = 1; i <= 5; i++) {
  //   cout << "\nPrinting for time " << i << ": \n";
  //   printUMAP(umap);
  // }
  return 0;
}