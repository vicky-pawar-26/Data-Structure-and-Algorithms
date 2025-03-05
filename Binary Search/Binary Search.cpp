// leetcode 704
// TC: o(logN) SC: o(1)

#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int> arr, int target){
  int s = 0;
  int e = arr.size() - 1;

  while(s <= e){
    int mid = s + (e - s) / 2;
    if(arr[mid] == target){
      return mid;
    }
    else if(arr[mid] < target){
      s = mid + 1;
    }
    else{
      e = mid - 1;
    }
  }

  return -1;
}

int main() {
  
  vector<int> arr = {1, 2, 3, 4, 5};

  int ans = bs(arr, 2);
  cout<<ans;

  return 0;
}