#include <bits/stdc++.h>
using namespace std;

void printName(int n)
{
  if (n == 0)
    return;
  else
  {
    cout << "Rishabh ";
    printName(n - 1);
  }
}

void print1toN(int i, int n)
{
  // When I goes above N, no more recursion else
  // print I and increment I and do recursion.
  if (i > n)
    return;
  else
  {
    cout << i << " ";
    print1toN(i + 1, n);
  }
}

void printNto1(int n, int i)
{
  /*
    Check if n < I. If yes simply terminate the recursion
    call (control comes to previously called recursion function).
    Else print n and call recursion function with n-1.
  */
  if (n < i)
    return;
  else
  {
    cout << n << " ";
    printNto1(n - 1, i);
  }
}

void backtrack1toN(int i, int n)
{
  // We will decrease n by 1 at each recursion call
  // and then print n via backtracking
  // Base condition to met: i > n [as I remains same but N reduces linearly]
  if (i > n)
    return;
  else
  {
    backtrack1toN(i, n - 1);
    cout << n << " ";
  }
}

void backtrackNto1(int n, int i)
{
  // Check whether i > n and If yes return to previous function which called you
  // Else call recursion function with i+1.
  // When condition is met the I would be 10 and it simply prints it.
  if (i > n)
    return;
  else
  {
    backtrackNto1(n, i + 1);
    cout << i << " ";
  }
}

int paramSumN(int n, int sum)
{
  // Check whether n = 0 and If yes return sum
  /* Else call recursion with modified parameters such
  that N decemented by 1 and SUM incremented by N */
  // Repeat above steps until n is zero.
  if (n == 0)
    return sum;
  else
    paramSumN(n - 1, sum + n);
}

int funcSumN(int n, int sum)
{
  // Simplest approach: Return N + function(n-1, sum) until N is 0
  if (n == 0)
    return sum;
  else
    return n + funcSumN(n - 1, sum);
}

int factSumN(int n, int fact)
{
  if (n == 0)
    return fact;
  else
    factSumN(n - 1, fact * n);
}

int factFuncN(int n, int fact)
{
  if (n == 0)
    return fact;
  else
    return n * factFuncN(n - 1, fact);
}

void singlePointReverse(int ini, char arr[], int size)
{
  /*
  - Swap index 0 with last   index then call twoPointReverse(ini + 1, arr, size - 1)
  - Swap index 1 with last-1 index then as above and
  - so on until the array is completely traversed (i.e ini >= size-1)
  */
  if (ini >= size - 1)
    return;
  swap(arr[ini], arr[size - 1]);
  singlePointReverse(ini + 1, arr, size - 1);
}

string isPalindrome(int i, string name, int size)
{
  /*
  -Loop from index 0 to size/2
  -If index >= size/2 return true as we checked that all characters at opposite side matches
  -If any character is not matching then return "false" and terminate function
  -Else return Palindrome(i+1, name, size)
  */
  if (i >= size / 2)
    return "true";
  else if (name[i] != name[size - i - 1])
    return "false";
  else
    return isPalindrome(i + 1, name, size);
}

int fibo(int n)
{
  if (n == 0 || n == 1)
    return n;
  return fibo(n - 1) + fibo(n - 2);
}

int main()
{
  // Problem 1:  Print name 5 times.
  cout << "\nPrinting name 5 times: ";
  printName(5);

  // Problem 2: Print 1 to N linearly
  cout << "\nPrinting 1 to N linearly: ";
  print1toN(1, 10);

  // Problem 3: Print N to 1 linearly
  cout << "\nPrinting N to 1 linearly: ";
  printNto1(10, 1);

  // Backtracking: Printing logic or print lines after function call
  // Problem 4: Print 1 to N by Backtracking
  cout << "\nPrint 1 to N by Backtracking: ";
  backtrack1toN(1, 10);

  // Problem 5: Print N to 1 by Backtracking
  cout << "\nPrint N to 1 by Backtracking: ";
  backtrackNto1(10, 1);

  // Problem 6: Print sum of first N numbers using parameterised approach.
  cout << "\nPrint sum of 1 to 10 (Parameterised recursion): " << paramSumN(10, 0);

  // Problem 7: Print sum of first N numbers using functional approach.
  cout << "\nPrint sum of 1 to 10 (functional approach): " << funcSumN(10, 0);

  // Problem 8: Print factorial of first N numbers using parameterized approach.
  cout << "\nPrint factorial of 1 to 5 (Parameterised recursion): " << factSumN(5, 1);

  // Problem 9: Print factorial of first N numbers using functional approach.
  cout << "\nPrint factorial of 1 to 5 (Functional approach): " << factFuncN(5, 1);

  // Problem 10: Reverse an array using Recursion(Single Pointer approach)
  char arr[] = {'r', 'i', 's', 'h', 'a', 'b', 'h'};
  int size = sizeof(arr) / sizeof(char);
  cout << "\nInitial array: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i];
  }
  singlePointReverse(0, arr, size);
  cout << "\nReversed array: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i];
  }

  // Problem 11: Check Palindrome using Recursion
  string name = "MADAM";
  cout << "\nIs " << name << " palindrome ? " << isPalindrome(0, name, name.length());

  // Problem 12: Fibonacii number at nth index
  cout << "\nFibonacci at 9th index: " << fibo(9);

  return 0;
}