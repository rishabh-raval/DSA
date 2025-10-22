#include<bits/stdc++.h>
using namespace std;

void printQueue(queue<int> q1) {
  queue<int> q2 = q1;
  while(!q2.empty()) {
    cout << q2.front();
    q2.pop();
  }
}

int main() {
  /*
  - FIFO (First In First Out)
  - Inserting elements at back end and deleting at front end.
  - Insertion using single function push() only.
  - Only front(q.front()) and back(q.back()) element can be accessed.
  - Deletion using single function pop() only.
  - Only traverse option takes O(n) TC.
  */

  queue<int> q;
  for (int i = 1; i <= 5; i++)
    q.push(i);

  cout << "\nThe elements of the queue are: ";
  printQueue(q);

  cout << "\nThe size of the queue: " << q.size();
  cout << "\nThe front element of the queue: " << q.front();
  cout << "\nThe rear element of the queue: " << q.back();
  cout << "\nPop the front element: ";
  q.pop();
  printQueue(q);

  // queue<int> qu;
  // qu.push(1);
  // qu.push(2);
  // qu.emplace(4);
  // cout << qu.back(); // 4
  // cout << qu.front(); // 1
  // qu.back() += 5;
  // cout << qu.back(); // 9
  // qu.pop(); // deletes the first entered guy here 1
  // cout << qu.front(); // 2
  return 0;
}