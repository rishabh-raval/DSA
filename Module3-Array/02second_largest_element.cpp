#include<bits/stdc++.h>
using namespace std;

void bruteForceApproach() {
  int arr[] = {1, 2, 4, 7, 7, 5};
  int n = sizeof(arr) / sizeof(int);
  // Sort the array
  sort(arr, arr + n);

  // Initialize last elem as largest
  int largest = arr[n - 1], slargest = 0;
  for (int i = n - 2; i >= 0; i--) {
    if(arr[i] < largest) {
      slargest = arr[i];
      break;
    }
  }

  cout << "\nSecond largest: " << slargest;
}

void betterApproach() {
  // First pass - obtaining largest element by sort
  int arr[] = {1, 2, 4, 7, 7, 5};
  int n = sizeof(arr) / sizeof(int);
  // Sort the array
  sort(arr, arr + n);

  // Initialize largest = arr[n-1] (Sorted array has largest element as last)
  int largest = arr[n - 1];
  // Initialize slargest = -1 (if elements in array are non-negative)
  int slargest = -1;
  // Loop through the array from start to end
  for (int i = 0; i < n; i++) {
    if(arr[i] > slargest && arr[i] != largest)
      slargest = arr[i];
  }
  cout << "\nSecond largest: " << slargest;
}

void optimalApproach() {
  int arr[] = {1, 2, 4, 7, 7, 5};
  int n = sizeof(arr) / sizeof(int);

  int largest = arr[0];
  int slargest = 0;
  for (int i = 1; i < n; i++) {
    if(arr[i] > largest) {
      slargest = arr[i - 1];
      largest = arr[i];
    } else if(arr[i] > slargest && arr[i] < largest) {
      slargest = arr[i];
    }
  }

  cout << "\nSecond largest: " << slargest;
}

int secondLargest(int arr[], int n) {
  int largest = arr[0];
  int slargest = -1;

  for (int i = 1; i < n; i++) {
    if(arr[i] > largest) {
      slargest = largest;
      largest = arr[i];
    } else if(arr[i] != largest && arr[i] > slargest)
      slargest = arr[i];
  }
  return slargest;
}

int secondSmallest(int arr[], int n) {
  int smallest = arr[0];
  int ssmallest = INT_MIN;

  for (int i = 1; i < n; i++) {
    if(arr[i] < smallest) {
      ssmallest = smallest;
      smallest = arr[i];
    } else if(arr[i] != smallest && arr[i] < ssmallest) {
      ssmallest = arr[i];
    }
  }

  return ssmallest;
}

void problem1() {
  int arr[] = {7, 7, 5, 1, 2, 4};
  int n = sizeof(arr) / sizeof(int);

  int slargest = secondLargest(arr, n);
  int ssmallest = secondSmallest(arr, n);

  cout << "\nSecond largest: " << slargest << "\t" << "Second smallest: " << ssmallest;
}

int main() {

  // Brute force approach
  // TC = O(nlogn) + O(n)
  // bruteForceApproach();


  // Better approach
  // TC = O(2n)
  // betterApproach();

  // Optimal approach
  // TC = O(n)
  // optimalApproach();

  // Finding second largest and second smallest elements
  problem1();

  return 0;
}