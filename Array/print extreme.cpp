
// Apporoach No. 1
// Using two pointer approch
// Time Complexity: o(n)
// Space Complexity: o(1)
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr = {1, 2, 3, 5, 6};
  int n = arr.size();
  int i = 0;
  int j = n - 1;

  while(i <= j){
    if(i == j){
      cout<<arr[i]<<" ";
      break;
    }
    else{
      cout<<arr[i]<<" ";
      cout<<arr[j]<<" ";
      i++;
      j--;
    }
  }

  return 0;
}