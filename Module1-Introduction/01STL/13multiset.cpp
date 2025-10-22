#include<bits/stdc++.h>
using namespace std;

void printContainer(multiset<int>&ms1) {
  for (auto it : ms1){
    cout << it << " ";
  }
}

int main() {
  /*
  - Stores multiple same values in sorted order. (Unique values X Sorted order \/)
  - If we erase any value all its copy value will be erased.
  - As find method returns iterator we can delete a single instance of multivalued element.
  */

  // Implementing first comment
  multiset<int> ms1 = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 7, 8, 9, 10, 10};
  cout << "\nInitial multiset ms1: ";
  printContainer(ms1);

  // Implementing second comment
  ms1.erase(2);
  cout << "\nAll instance of 2 erased..\n";
  printContainer(ms1);

  // Implementing third comment
  ms1.erase(ms1.find(3));
  cout << "\nSingle instance of element 3 removed..\n";
  printContainer(ms1);

  return 0;
}