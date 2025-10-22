#include<bits/stdc++.h>
using namespace std;

void number_hash() {
  int arr[] = {1, 2, 3, 1, 3, 2, 12};
  int n = sizeof(arr) / sizeof(int);

  // Pre-compute
  unordered_map<int, int> mpp;
  for (int i = 0; i < n; i++) {
    mpp[arr[i]]++;
  }

  // Fetch
  for (auto it : mpp) {
    cout << it.first << " appeared " << it.second << " times." << "\n";
  }
}

void char_hash() {
  string str = "absrABSR";
  
  // Pre-compute
  unordered_map<char, int> mpp;
  for (int i = 0; i < str.length(); i++) {
    mpp[str[i]]++;
  }

  // Fetch
  for(auto it : mpp) {
    cout << it.first << " appeared " << it.second << " times." << "\n";
  }
}

int main() {
  /* 
  The main advantage of using unordered map in hashing is that its 
  Best and Average Time Complexity is O(1) for Pre-compute and Fetching
  Worst case TC for same is Linear time i.e O(n)
  <----- Things to be noted while solving ques or contests ----->
  -> If TLE occurs using unordered_map use map
  -> If TLE occurs using map use array Hashing
  
  How worst case occur in unordered_map ? Due to collisions
  How hashing works internally ?
  -> Division Method (Must to know)
  -> Folding method and Mid square method (This 2 methods are not needed)

  How division method works ?
  -> Imagine array is {2, 6, 8, 123, 324, 45, 139} and you have to use array-hashing with maximum 10 blocks to store their occurences.
  -> Now here we will trim downlarge value like 139 to 139%10 = 9 and so on for others.
  -> The hash-array will look like:
  0- 0
  1- 0
  2- 2
  3- 123
  4- 324
  5- 45
  6- 0
  7- 0
  8- 0
  9- 139

  -> Imagine we have array as {1, 11, 11, 21, 31, 41, 51, ... 1001} and the condition is same i.e maximum 10 elements in hash-array.
  -> The hash-array will look like:
  0- 0
  1- 1->11->11->21->31-> ... ->1001 (Linear chain with linked list in back)
  and others will obviously contain no elements i.e wastage of space

  -> In above case all elements go in one index of hash-array i.e 1 and this created internal collisions.
  -> If we want to search for 1001 or any number it will take O(n) or O(n2) as per our code.
  */

  number_hash();
  char_hash();

  return 0;
}