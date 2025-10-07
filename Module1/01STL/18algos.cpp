#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> &p1, pair<int, int> &p2) {
  if(p1.second < p2.second)
    return true;
  if(p1.second > p2.second)
    return false;
  if(p1.second == p2.second) {
    if(p1.first > p2.first)
      return true;
    if(p1.first < p2.first)
      return false;
  }
}

int main() {
  /*
  - Till now folllowing things covered:
    1. Algorithms - 'will be learning in this file'.
    2. Containers - DONE
    3. Iterators - DONE 
    4. Functions - No need to learn from scratch (Already know very well)
  */

  /*
  Inbuilt sort() uses mix of quick sort and merge sort with TC of N*logN
  Syntax: sort(begin_iterator, end_iterator)
  */
  vector<int> vec = {100, 90, 23, 80, 55, 70, 65};
  cout << "\nInitial vector vec: ";
  for(auto it : vec)
    cout << it << " ";

  sort(vec.begin(), vec.end());
  cout << "\nSorted the vector vec: ";
  for(auto it : vec)
    cout << it << " ";
  
  // Sort in Descending order
  /*
  sort() gives optional third parameter - comparator, which is used for comparing 2 elements in the container
  For descending the elems of container, we use 'greater<container_data_type>()'
  ex: greater<int>()
  */
  cout << "\nSorted vector vec in descending order: ";
  sort(vec.begin(), vec.end(), greater<int>());
  for(auto it : vec)
    cout << it << " ";

  // Custom Comparators(My way)
  /*
  Sort the array of pairs according to second element
  If second element is same, then sort it according to first element but in descending order.
  IF pair is = {{1, 2}, {2, 1}, {4, 1}} then 
  it should be {{4, 1}, {2, 1}, {1, 2}}
  */
  pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
  sort(a, a + 3, comp);
  cout << "\nSorted the array of pairs using my way comaparator..\na.first\ta.second";
  for(auto it : a)
    cout << "\n" << it.first << "\t" << it.second;

  // BUILTIN_POPCOUNT to evaluate the set bits(bits in binary representation set to 1)
  int num = 7;
  cout << "\nTotal set bits in binary of 7: " << __builtin_popcount(7);

  long long long_num = 27361848;
  cout << "\nTotal set bits in binary of 27361848: " << __builtin_popcount(27361848);

  // next_permutation(str.begin(), str.end());
  string s = "321";
  cout << "\nPrinting all permutations of " << s << ": \n";
  if(!next_permutation(s.begin(), s.end())) {
    sort(s.begin(), s.end());
    for(auto it : s)
      cout << it << " ";
  } else {
    while (next_permutation(s.begin(), s.end())) {
      cout << s << endl;
    }
  }

  // max_element method which returns iterator(address) and to print the value at that iterator insert * at begin
  int max_elem = *max_element(vec.begin(), vec.end());
  int min_elem = *min_element(vec.begin(), vec.end());
  cout << "\nMaximum element in vector vec: " << max_elem;
  cout << "\nMinimum element in vector vec: " << min_elem;

  return 0;
}