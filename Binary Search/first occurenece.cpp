// leetcode 34
// First occurenece
// TC: o(log(n)) SC: o(1)

#include <iostream>
#include <vector>
using namespace std;

int getFirstOcc(vector<int> arr, int target){
  int s = 0;
  int e = arr.size() - 1;
  int ans = -1;

  while(s <= e){
      int mid = s + (e - s) / 2;

      if(arr[mid] == target){
        ans = mid;
        e = mid - 1;
      }
      else if(target > arr[mid]){
        s = mid + 1;
      }
      else{
        e = mid - 1;
      }
  }

  return ans;
}

int main() {
  vector<int> arr{1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 5, 6, 7};
  int target = 3;
  int firstOcc = getFirstOcc(arr, target);
  cout<<firstOcc<<endl;
  return 0;
}