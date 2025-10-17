#include<bits/stdc++.h>
using namespace std;

/*
Intuition: (Works on Divide-conquer-Merge concept)
1. Divide the array into two halves
   - First half is from first to mid element
   - Second half is from mid+1 to high element.
2. Repeat this until the each array contains single element.
3. Merge the divided arrays into single arrays.
   - Two arrays merged with single elements = 2 elements in one array.
   - Two arrays merged with 2 elements = 4 elements in one array.
   - At last you will get left sub-array and right sub-array.
4. Finally merge two sub-arrays to get the final sorted array using merge algorithm.

Time Complexity:
- logN for dividing
- N for merging total n elements.
- total: O(NlogN) for all case

Space Complexity:
- O(n) as it requires creating temporary data structure while merging two different subarrays and in worst case it takes space of total n elements in it.
*/

void merge(int arr[], int low, int mid, int high) {
  // Creating a temporary data structure for storing sorted elements
  vector<int> vec;
  // creating left pointer at low index
  int left = low;
  // creating right pointer at mid+1 index
  int right = mid + 1;
  // Merge logic: Put elements from two distinct already sorted array.
  while(left <= mid && right <= high) {
    // If left subarray element < right subarray element 
    // place them in temporary container
    if(arr[left] <= arr[right]) {
      vec.emplace_back(arr[left]);
      // increment left sub-array pointer
      left++;
    } else {
      // Else if right sub-array pointer is less than left subarray pointer
      // place them in temporary container
      vec.emplace_back(arr[right]);
      // Increment right sub-array pointer
      right++;
    }
  }
  // If left sub-array elements are left and right sub-array are placed..
  while(left <= mid) {
    // Then simply place the elements as it is in temporary container
    vec.emplace_back(arr[left]);
    // increment left sub-array pointer
    left++;
  }
  // If right sub-array elements are left and left sub-array are placed..
  while(right <= high) {
    // Then simply place the elements as it is in temporary container
    vec.emplace_back(arr[right]);
    // increment right sub-array pointer
    right++;
  }
  // Import the sorted element from temporary
  // space to given array in given order
  for (int i = low; i <= high; i++) {
    arr[i] = vec[i - low];
  } 
}

void mergeSort(int arr[], int low, int high) {
  // Base condition: If low pointer is equal to right pointer
  // i.e array containing only 1 element and we can't divide the array anymore
  if(low >= high)
    return;
  // Find mid element for each passed array
  int mid = (low + high) / 2;
  // Recursively call mergeSort for diving the left sub-array
  mergeSort(arr, low, mid);
  // Recursively call mergeSort for dividing the right sub-array
  mergeSort(arr, mid + 1, high);
  // Finally for each sub-arrays we merge them
  merge(arr, low, mid, high);
}

int main() {

  int arr[] = {3, 1, 2, 4, 1, 5, 6, 2, 4};
  int high = (sizeof(arr) / sizeof(int)) - 1;
  cout << "\nUnsorted array: ";
  for(auto it : arr)
    cout << it << " ";

  mergeSort(arr, 0, high);
  cout << "\nSorted array: ";
  for(auto it : arr) {
    cout << it << " ";
  }

  return 0;
}