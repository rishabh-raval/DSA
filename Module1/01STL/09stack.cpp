#include<bits/stdc++.h>
using namespace std;

int main() {
  /*
  - LIFO (Last In First Out)
  - TOP pointer for inserting/deleting/traversing
  - Only traversing option takes O(n) TC
  */
  // stack<int> st;
  // st.push(1); // {1}
  // st.push(2); // {2, 1}
  // st.push(3); // {3, 2, 1}
  // st.push(4); // {4, 3, 2, 1}
  // st.emplace(5); // {5, 4, 3, 2, 1}

  // cout << st.top(); // 5
  // cout << st.size(); // 5
  // cout << st.empty(); // 0
  // stack<int> st1, st2;
  // for (int i = 100; i <= 500; i+=100) {
  //   st1.push(i);
  // }
  // for (int i = 600; i <= 1000; i+=100) {
  //   st2.push(i);
  // }
  // st1.swap(st2);

  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.emplace(5);

  cout << st.top();
  cout << st.size();
  cout << st.empty();

  cout << "\nPrinting stack: ";

  stack<int> s2 = st;
  while(!s2.empty()) {
    cout << s2.top() << " ";
    s2.pop();
  }

  return 0;
}