#include<bits/stdc++.h>
using namespace std;

void printn(int n) {
  if(n > 5)
    return;
  else {
    cout << n << " ";
    printn(n+=1);
  }
}

int main() {
  // Recursion - When a function calls itself until a specified condition is met.
  printn(1);
  return 0;
}