#include<bits/stdc++.h>

using namespace std;

int main() {
  // Pairs
  // pair<int, int> p = {1, 3};
  // cout << p.first << " " << p.second << "\n";

  // // Nested pairs
  // pair<int, pair<int, int>> p1 = {1, {2, 3}};
  // cout << p1.first << " " << p1.second.first << " " << p1.second.second;

  // // Array of pairs
  // pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
  // cout << "\nPrinting array of pairs: \n";
  // for(auto it : arr) {
  //   cout << it.first << " " << it.second << "\n";
  // }

  // pair<int, string> numname = {55, "Rishabh"};
  // cout << numname.first << " | " << numname.second;

  pair<int, string> student_info(101, "Rishabh");
  cout << "\nStudent ID: " << student_info.first;
  cout << "\nStudent name: " << student_info.second;

  auto coordinates = make_pair(15.5, 20.0);
  cout << "\nX coordinate: " << coordinates.first << " | Y coordinate: " << coordinates.second;

  pair<int, int> p1 = {5, 4};
  pair<int, int> p2 = {5, 3}; 
  if(p1 < p2)
    cout << "\nP1 is less than p2";
  else 
    cout << "\nP2 is less than p1";

  return 0;
}