#include<bits/stdc++.h>
using namespace std;

void printList(list<int> li) {
  list<int>::iterator it;
  for (it = li.begin(); it != li.end(); it++) {
    cout << *it << " ";
  }
}

int main() {

  /*
  - List implements Doubly Linked List hence allowing faster insertion and deletion from any place in the list.
  - List don't allow random access like ls[3].
  - But we can access the front and back element using ls.front() and ls.back()
  - Expensive operations. (TC: O(n)):
    - Traverse list
    - Insert/delete at any arbitrary position
    - Access element at any arbitrary position
  */

  list<int> li;
  li.push_back(10);
  li.push_back(20);
  li.push_front(30);
  li.push_front(40);
  li.push_front(50);

  cout << "\nThe elements in the list are: ";
  printList(li);

  cout << "\nReversing the list: ";
  li.reverse();
  printList(li);

  cout << "\nSorting the list: ";
  li.sort();
  printList(li);

  cout << "\nThe Size of the list is: " << li.size();
  cout << "\nThe first element of the list is: " << li.front();
  cout << "\nDeleting the first element: ";
  li.pop_front();
  printList(li);
  cout << "\nThe last element of the list: " << li.back();
  cout << "\nDeleting the last element: ";
  li.pop_back();
  printList(li);

  
  // list<int> ls; // {}
  // ls.push_back(4); // {4}
  // ls.emplace_back(5); // {4, 5}
  // ls.push_front(3); // {3, 4, 5}
  // ls.emplace_front(2); // {2, 3, 4, 5}
  // for(auto it : ls) {
  //   cout << it << " ";
  // }
  // cout << "\nFront element: " << ls.front();
  // cout << "\nBack element: " << ls.back();
  

  // // Updating list
  // list<int> l = {1, 2, 3, 4, 5};
  // cout << "\nPrinting list l: \n";
  // for(auto it : l) {
  //   cout << it << " ";
  // }

  // cout << "\nUpdating front element to 100..\n";
  // l.front() = 100;
  // for(auto it : l) {
  //   cout << it << " ";
  // }

  // cout << "\nUpdating all elements using iterator: ";
  // for(auto it : l) {
  //   it *= 100;
  //   cout << it << " ";
  // }




  return 0;
}