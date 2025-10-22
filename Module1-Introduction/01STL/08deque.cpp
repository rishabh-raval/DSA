#include<bits/stdc++.h>
using namespace std;

int main() {
  /*
  - Random access in deque is possible like dq[2]
  - Insert/Remove at arbitrary position takes O(n) TC
  - Traverse the DQ takes O(n) TC
  */

  
  deque<int> dq = {20, 30, 40, 50, 60, 70, 30};
  // dq.push_back(1); // {1}
  // dq.emplace_back(2); // {1, 2}
  // dq.push_front(4); // {4, 1, 2}
  // dq.emplace_front(3); // {3, 4, 1, 2}
  cout << "\nInitial DQ: ";
  for(auto it : dq) {
    cout << it << " ";
  }

  cout << "\nRemoving element using pop_back(): ";
  dq.pop_back(); // {3, 4, 1}
  for(auto it : dq) {
    cout << it << " ";
  }

  cout << "\nRemoving element using pop_front(): ";
  dq.pop_front(); // {4, 1}
  for(auto it : dq) {
    cout << it << " ";
  }

  cout << "\nAccessing last element using dq.back(): " << dq.back(); // 1
  cout << "\nAccessing front element using dq.front(): " << dq.front(); // 4

  cout << "\nTraversing DQ: ";
  for(auto it : dq) {
    cout << it << " ";
  }

  cout << "\nUpdating DQ..";
  dq[2] = dq[2] * 100;
  for(auto it : dq) {
    cout << it << " ";
  }
  return 0;
}