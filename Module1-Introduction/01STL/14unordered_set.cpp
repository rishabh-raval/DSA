#include<bits/stdc++.h>
using namespace std;

void printUS(unordered_set<int>&us) {
  for (auto it : us){
    cout << it << " ";
  }
}

int main() {
  /*
  - Stored only unique elements but not in any specific order. (sorted order X unique values \/)
  - All the operations are same but upper bound and lower bounds are not available.
  - Worst case TC: O(n) otherwise TC: O(1)
  */


  // unordered_set<int> us = {10, 20, 30, 40, 50, 60, 12, 22, 32, 42, 52, 55, 67};
  // for (int i = 0; i < 5; i++){
  //   cout << "\nPrinting unordered set for time " << (i+1) << ": ";
  //   printUS(us);
  // }

  unordered_set<int> us;
  for (int i = 1; i <= 10; i++)
    us.insert(i);

  cout << "\nElements present in unordered set: ";
  printUS(us);

  int n = 2;
  if(*(us.find(n)) == 1)
    cout << "\n" << n << " is present in unordered set.";

  us.erase(us.begin());
  cout << "\nElements after deleting the first element: ";
  printUS(us);

  cout << "\nSize of the unoredered set: " << us.size();

  if(!us.empty())
    cout << "\nUnordered set is not empty";
  else
    cout << "\nUnordered set is empty";

  us.clear();
  cout << "\nSize of unordered set after clearing all the elements: " << us.size();

  return 0;
}