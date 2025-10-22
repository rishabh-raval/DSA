#include<bits/stdc++.h>
using namespace std;

void printPriorityQueue(priority_queue<int> pq) {
  priority_queue<int> pqc = pq;
  while(!pqc.empty()) {
    cout << pqc.top() << " ";
    pqc.pop();
  }
}

void printMinHeap(priority_queue<int, vector<int>, greater<int>> pq_min_heap) {
  priority_queue<int, vector<int>, greater<int>> pqmhc = pq_min_heap;
  while(!pqmhc.empty()) {
    cout << pqmhc.top() << " ";
    pqmhc.pop();
  }
}

int main() {
  /*
  - Largest value/element stays at the top.
  - implements max heap data structure by default
  - is an adaptor built on vector/or any other provided container.
  - Syntax: priority_queue<T, c, comp>
    - T = Type of data
    - c = underlying container
    - comp = comparator to sort elements (i.e top either holds Max value or Min value) 
  - Adding and Deleting element takes Log(n) TC.
  */

  priority_queue<int> pq;
  for (int i = 1; i <= 5; i++)
    pq.push(i);

  cout << "\nElements of the pq are: ";
  printPriorityQueue(pq);

  cout << "\nSize of pq: " << pq.size();
  cout << "\nTop of pq: " << pq.top();
  cout << "\nPopping element: ";
  pq.pop();
  printPriorityQueue(pq);

  priority_queue<int, vector<int>, greater<int>> pq_min_heap;
  for (int i = 1; i <= 5; i++)
    pq_min_heap.push(i);

  cout << "\nThe elements of the pq_min_heap: ";
  printMinHeap(pq_min_heap);

  cout << "\nSize of the pq_min_heap: " << pq_min_heap.size();
  cout << "\nTop element of the pq_min_heap: " << pq_min_heap.top();
  cout << "\nPop the top element of pq_min_heap: ";
  pq_min_heap.pop();
  printMinHeap(pq_min_heap);

  // priority_queue<int> pq;
  // pq.push(5);
  // pq.push(100);
  // pq.push(90);
  // pq.push(2);
  // pq.push(8);
  // pq.emplace(10);

  // cout << "\nElement at front(top): " << pq.top();
  // cout << "\nRemove the top element: ";
  // pq.pop();
  // cout << "\nElement at front(top): " << pq.top();

  // // Minimum heap
  // priority_queue<int, vector<int>, greater<int>> pq_min_heap;
  // pq_min_heap.push(8);
  // pq_min_heap.push(100);
  // pq_min_heap.push(12);

  // cout << "\nTop element on min heap: " << pq_min_heap.top();

  return 0;
}