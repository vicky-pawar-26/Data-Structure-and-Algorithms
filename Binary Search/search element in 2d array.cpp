// Search elements in 2D array
// Approach No. 1
// Using binary Search
// TC: o(logN) SC: o(1)

#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;

bool findTarget(vector<vector<int> >& arr, int row, int col, int target){
  int s = 0;
  int e = row * col - 1;

  while(s <= e){
    int mid = s + (e - s) / 2;
    int rowIndex = mid / col;
    int colIndex = mid % col;

    if(arr[rowIndex][colIndex] == target){
      return true;
    }
    else if(target > arr[rowIndex][colIndex]){
      s = mid + 1;
    }
    else{
      e = mid - 1;
    }
  }

  return false;
}

int main() {
  vector<vector<int> > arr{
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  int row = arr.size();
  int col = arr[0].size();
  int target = 5;

  bool isFound = findTarget(arr, row, col, target);
  if(isFound){
    cout<<"Target found!"<<endl;
  }
  else{
    cout<<"Target not found!"<<endl;
  }
  return 0;
}