// Search in neraly sorted array
// TC: o(logN) SC: o(1)

#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int target){
  int s = 0;
  int e = arr.size() - 1;

  while(s <= e){
    int mid = s + (e - s) / 2;
    if(arr[mid] == target){
      return mid;
    }
    else if(arr[mid - 1] == target){
      return mid - 1;
    }
    else if(arr[mid + 1] == target){
      return mid + 1;
    }
    else if(target > arr[mid]){
      s = mid + 2;
    }
    else{
      e = mid - 2;
    }
  }

  return -1;
}

int main() {
  vector<int> arr{10, 3, 40, 20, 50, 80, 70};
  int target = 40;

  int ans = binarySearch(arr, target);
  cout<<"Index of "<< target<<" is "<<ans<<endl;
  return 0;
}