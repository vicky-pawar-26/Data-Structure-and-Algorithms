// Exponational binary search 
// TC: o(log(2^log^m/2)) SC: o(1)
// Applications -> Infinite array search

#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int>& arr, int s, int e, int target){
  while(s <= e){
    int mid = s + (e - s) / 2;
    if(arr[mid] == target){
      return mid;
    }
    else if(target > arr[mid]){
      s = mid + 1;
    }
    else{
      e = mid - 1;
    }
  }
  return -1;
}

int solve(vector<int>& arr, int target){
  int n = arr.size();
  if(arr[0] == target) return 0;
  int i = 1;
  while(i < n && arr[i] <= target){
    i *= 2;
  }
  return bs(arr, i/2, min(i, n - 1), target);
}

int main() {
  vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int target = 8;
  int ans = solve(arr, target);
  cout<<ans;
  return 0;
}