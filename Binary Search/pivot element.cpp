// Find out pivot element from array
// Approach No. 1
// Using Binary Search
// TC: o(logN) SC: o(1)

#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;

int getPivotElement(vector<int> arr){
  int s = 0;
  int e = arr.size() - 1;

  while(s <= e){
    int mid = s + (e - s) / 2;
    if(s == e){
      return s;
    }
    else if(mid + 1 <= e && arr[mid] > arr[mid + 1]){
      return mid;
    }
    else if(mid - 1 >= s && arr[mid - 1] > arr[mid]){
      return mid - 1;
    }
    else if(arr[s] > arr[mid]){
      e = mid - 1;
    }
    else{
      s = mid + 1;
    }
  }

  return -1;
}

int main() {
  vector<int> arr{3, 4, 5, 6, 7, 8, 1, 2};
  int pivotElemet = getPivotElement(arr);
  cout<<"Pivot element -> "<<pivotElemet<<endl;
  return 0;
}