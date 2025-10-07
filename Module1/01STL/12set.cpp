#include<bits/stdc++.h>
using namespace std;

int main() {
  /*
  - Set stores unique elements in sorted order.(unique + sort)
  - st.find(element) returns the iterator and not the actual value.
  - If the find() method don't find the given value it returns 'st.end()'
  - st.erase(value) erases the given element and maintains sorted order.
  - st.count(55) returns 1 if it is there otherwise 0
  - lower_bound and upper_bound always returns iterator
  - Every operation in set occurs in 'log(n)' TC.
  */

  set<int> s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "\nElements present in set: ";
  for(auto it : s) {
    cout << it << " ";
  }

  int n = 2;
  if(*(s.find(n)) == 1) {
    cout << "\n" << n << " is present in set";
  }

  s.erase(s.begin());
  cout << "\nElements after deleting the first element: ";
  for(auto it : s)
    cout << it << " ";

  cout << "\nThe size of the set is: " << s.size();

  if(s.empty() == false)
    cout << "\nThe set is not empty.";
  else
    cout << "\nThe set is empty.";

  s.clear();
  cout << "\nThe size of the set after clearing all the elements: " << s.size();

  // set<int> st;
  // st.emplace(100);
  // st.emplace(2);
  // st.emplace(101);
  // st.emplace(3);
  // st.emplace(55);

  // cout << "\nPrinting initial state of set: ";
  // for(auto it : st) {
  //   cout << it << " ";
  // }

  // auto it = st.find(3); // returns iterator not the actual value.
  // cout << "\nElement founded: " << *it;
  // it++;
  // cout << "\nNext element: " << *it;

  // st.erase(101); // Simply erase the element and maintains sorted order.

  // cout << "\nCount 55 in given set: " << st.count(55);

  // set<int> set1 = {100, 55, 23, 12, 7, 3, 2, 1, 0};
  // cout << "\nInitial state of set1: ";
  // for(auto it : set1) {
  //   cout << it << " ";
  // }
  // cout << "\nLower bound of 55: " << *(set1.lower_bound(55));
  // cout << "\nUpper bound of 55: " << *(set1.upper_bound(55));
  // cout << "\nLower bound of 50: " << *(set1.lower_bound(50));
  // cout << "\nUpper bound of 50: " << *(set1.upper_bound(50));
  // cout << "\nLower bound of 100: " << *(set1.lower_bound(100));
  // cout << "\nUpper bound of 100(prints end()): " << *(set1.upper_bound(100));

  return 0;
}