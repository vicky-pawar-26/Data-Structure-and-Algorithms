// Approach No. 1
// Mark visited element
// TC: o(n) SC: o(1)

#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> arr, int n){
  for(int i = 0; i < n; i++){
    int index = abs(arr[i]);

    if(arr[index - 1] > 0){
      arr[index - 1] *= -1;
    }
  }

  for(int i = 0; i < n; i++){
    if(arr[i] > 0){
      cout<<i+1<<" ";
    }
  }
}

int main() {
  vector<int> arr {1, 3, 5, 3, 4};
  int n = arr.size();
  solve(arr, n);
  return 0;
}

// Approach No. 2
// Sorting and swap element check its index
// TC: o(n) SC: o(1)

#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> arr){
  int i = 0;
  while(i < arr.size()){
    int index = arr[i] - 1;
    if(arr[i] != arr[index]){
      swap(arr[i], arr[index]);
    }
    else i++;
  }

  for(int i = 0; i < arr.size(); i++){
    if(i+1 != arr[i]){
      cout<<i+1<<" ";
    }
  }
}

int main() {
  vector<int> arr{1, 3, 5, 3, 4};
  solve(arr);
  return 0;
}