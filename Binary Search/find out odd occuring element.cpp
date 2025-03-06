// leetcode 540
// Find out odd occuring element
// Approach No. 1
// Using hashMap we can store frequency of all element 
// TC: o(n) SC: o(n)

// Approach No. 2
// Using bitwise XOR
// TC: o(n) SC: o(1)

// Approach No. 3 -> optimal approach
// Using binary search
// Here answer always on even index
// TC: o(logN) SC: o(1)

#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;

int solve(vector<int>& arr){
  int s = 0;
  int e = arr.size() - 1;

  while(s <= e){
    int mid = s + (e - s ) / 2;
    if(s == e){
      return s; // Single Element Case
    }

    if((mid & 1) == 0){
      if(arr[mid] == arr[mid + 1]){
        s = mid + 2;
      }
      else{
        e = mid;
      }
    }
    else{
      if(arr[mid] == arr[mid - 1]){
        s = mid + 1;
      }
      else{
        e = mid - 1;
      }
    }
  }

  return -1;
}

int main() {
  vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};
  int ans = solve(arr);
  cout<<ans<<endl;
  return 0;
}