// LEETCODE 75
// Approach No. 1
// Dutch national flag algorithm used in this code also code pointer approach
// Time Complexity: o(n) -> coz iterating every element in single pass, examine each element once
// Space Complexity: o(1)

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int>arr {0, 2, 1, 2, 1, 0, 0, 0, 1, 1};
  int n = arr.size();
  int s = 0;
  int itr = 0;
  int e = n - 1;

  while(itr <= e){
    if(arr[itr] == 0) swap(arr[itr++], arr[s++]);
    else if(arr[itr] == 1) itr++;
    else swap(arr[itr], arr[e--]);
  }

  for(auto i: arr){
    cout<<i<<" ";
  }

  return 0;
}

// Apporach No. 2
// Counting each element
// Time Complexity: o(n) 
// Space Complexity: o(1);

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int>arr {0, 2, 1, 2, 1, 0, 0, 0, 1, 1};
  int n = arr.size();
  int ones = 0, twos = 0, zeros = 0;

  for(auto i: arr){
    if(i == 0) zeros++;
    else if(i == 1) ones++;
    else twos++;
  }

  int i = 0;
  while(zeros--){
    arr[i++] = 0;
  }

  while(ones--){
    arr[i++] = 1;
  }

  while(twos--){
    arr[i++] = 2;
  }

  for(auto i: arr){
    cout<<i<<" ";
  }

  return 0;
}

// Apporoach No. 3
// sort function in stl
// Time Complexity: o(nlogn) -> sort function used introSort -> quick, heap, insertion sort algo use
// Space Complexity: o(1)

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  vector<int>arr {0, 2, 1, 2, 1, 0, 0, 0, 1, 1};
  int n = arr.size();
  sort(arr.begin(), arr.end());
  
  for(auto i: arr){
    cout<<i<<" ";
  }

  return 0;
}