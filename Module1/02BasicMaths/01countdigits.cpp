#include<bits/stdc++.h>
using namespace std;

int count(int n) { return ceil(log10(n)); }

int reverse(auto n) {
  // Create a copy of received data as 
  // we don't modify the original data
  int n_copy = n;
  // Initialize variable for holding reverse number
  int ans = 0;
  // Loop throught until we extract all the digits
  while(n_copy > 0) {
    // Extract Remainder first
    int rem = n_copy % 10;  
    // Append Remainder to 
    // previously extracted digit
    ans = ans * 10 + rem; 
    // Reduce the duplicate number so we 
    // can move to extraction of next digit
    n_copy /= 10; 
  }
  return ans;
}

string isPalindrome(int n) {
  // Call Reverse method and store it.
  int n_copy = reverse(n);
  // Compare the actual number with its reversed 
  // version and return appropriately
  return n == n_copy ? "true" : "false";
}

string isArmstrong(int n) {
  /*
  Intuition:
  - Count total digits
  - Extract each digit and power it with total digits counted. (e.g 1634 has 4 digits so 1^4, 6^4 and so on..)
  - Add each digit like 1^4 + 6^4 + 3^4 + 4^4.
  - If the addition = given number (i.e addition = 1634) it is Armstrong.
  - Formal definition: A number equal to the addition of each digit powered by total number 
    of digits is called Armstrong number.
  */
  // Call Count
  int cnt = count(n);
  // Digits Extraction
  int n_copy = n;
  int ans = 0;
  while(n_copy > 0) {
    int rem = n_copy % 10;
    // Adding extracted digit
    ans = ans + pow(rem, cnt);
    n_copy /= 10;
  }
  // Checking whether Armstring or not.
  return ans == n ? "true" : "false";
}

void divisors_of(int n) {
  /*
  Intuition:
  - Loop from 1 to sqrt(n) as we get all divisors from dividends and divisors
  - check whether i completely divides n.
  - If yes add i and also add divisor i.e n/i
  - We might get duplicate values here (take n = 36 then i = 6 and n/i = 6). Hence use set to aviod duplicates and sort the data automatically.
  */
  set<int> s;
  for (int i = 1; i <= sqrt(n); i++) {
    if(n%i == 0) {
      s.insert(i);
      s.insert(n / i);
    }
  }
  cout << "\nDivisors of " << n << ": ";
  for(auto it : s)
    cout << it << " ";
}

string isPrime(int n) {
  /*
  Definition: The number which is completely divided by only 1 and itself.
  Intuition:
  - Loop from 2 to sqrt(n)
  - If any dividend or divisor completely divides n then terminate the loop and give negative answer.
  - else continue the loop
  - When loop is completed (without explicit termination) we return that n is indeed prime.
  */
  for (int i = 2; i <= sqrt(n); i++) {
    if(n%i == 0 || n&(n/i) == 0)
      return "false";
    else
      continue;
  }
  return "true";
}

int better_gcd(int n1, int n2) {
  /*
  Solving GCD using brute force approach
  Intuition:
  - Select Minimum from n1 and n2
  - Loop from minimum to 2 (decreasing way)
  - If any number i completely divides both n1%n2 terminate loop and return i
  - Return 1 if no value divides n1&n2.
  */
  int minnum = min(n1, n2), max_gcd = 0;
  for (int i = minnum; i > 1; i--) {
    if(n1%i == 0 && n2%i == 0) {
      return i;
    }
  }
  return 1;
}

int optimized_gcd(int n1, int n2) {
  /*
  Intuition:
  - Check n1 or n2 = 0 or not ? If yes the other one is GCD
  - Take n1 and n2 where n1 > n2.
  - call gcd(n1-n2, n2)
  - repeat above steps until either of them becomes 0 and the other one is GCD.
  */
  if(n1 == 0)
    return n2;
  else if(n2 == 0)
    return n1;
  else {
    optimized_gcd((max(n1, n2) - min(n1, n2)), min(n1, n2));
  }
  
}

int main() {

  cout << "\nTotal digits in 29379329: " << count(29379329);
  cout << "\nReverse of 10400: " << reverse(10400);
  cout << "\nIs 132231 a Palindrome number ? " << isPalindrome(132231);
  cout << "\nIs 1634 Armstrong number ? " << isArmstrong(1634);
  divisors_of(36);
  cout << "\nIs 15 prime ? " << isPrime(15);
  cout << "\nBetter Approach GCD(20, 40): " << better_gcd(20, 40);
  cout << "\nOptimized approach GCD(20, 15): " << optimized_gcd(20, 15);
  cout << "\nInbuilt __gcd(20, 40): " << __gcd(20, 40);

  return 0;
}