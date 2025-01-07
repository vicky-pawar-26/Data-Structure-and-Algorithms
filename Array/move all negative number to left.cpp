// Apporoach No. 1
// sort function in stl
// Time Complexity: o(nlogn) -> sort function used introSort -> quick, heap, insertion sort algo use
// Space Complexity: o(1)

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  vector<int>arr {-1, 3, 4, -2, -3, -9, 2, 8};
  int n = arr.size();
  sort(arr.begin(), arr.end());
  
  for(auto i: arr){
    cout<<i<<" ";
  }

  return 0;
}

// Approach No. 2
// Dutch national flag algorithm used in this code also code pointer approach
// Time Complexity: o(n) -> coz iterating every element in single pass, examine each element once
// Space Complexity: o(1)

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  vector<int>arr {-1, 3, 4, -2, -3, -9, 2, 8};
  int n = arr.size();
  int s = 0;
  int e = n - 1;

  while(s <= e){
    if(arr[s] < 0){
      s++;
    }
    else{
      swap(arr[s], arr[e--]);
    }
  }
  
  for(auto i: arr){
    cout<<i<<" ";
  }

  return 0;
}