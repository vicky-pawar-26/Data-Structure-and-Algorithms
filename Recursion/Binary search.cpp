#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int s, int e, int target){
  if (s > e) return -1;

  int mid = s + (e - s) / 2;

  if(arr[mid] == target) return mid;

  if (arr[mid] > target)
    return binarySearch(arr, n, s, mid - 1, target);
  else
    return binarySearch(arr, n, mid + 1, e, target);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = 5;
  int s = 0;
  int e = n - 1;
  int target = 2;
  
  int index = binarySearch(arr, n, s, e, target);

  if (index != -1)
    cout << "Element found at index: " << index << endl;
  else
    cout << "Element not found!" << endl;
  
  return 0;
}