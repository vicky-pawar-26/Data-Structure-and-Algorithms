#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Method 1: // TC: o(n ^ 2) SC: o(1)
bool isKeyPairExist1(vector<int> arr, int x){
  int n = arr.size();
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      if(arr[i] + arr[j] == x) return true;
    }
  }
  return false;
}

// Method 2: // TC: o(nlogn) SC: o(1)
bool isKeyPairExist2(vector<int> arr, int x){
  sort(arr.begin(), arr.end());
  int n = arr.size();
  int s = 0;
  int e = n - 1;

  while(s < e){
    int sum = arr[s] + arr[e];
    if(sum == x){
      return true;
    }
    else if(sum < x){
      s++;
    }
    else if(sum > x){
      e--;
    }
  }
  return false;
}

int main() {
  
  vector<int> arr{1, 4, 45, 6, 10, 8};
  int x = 5;

  bool isExist = isKeyPairExist2(arr, x);
  if(isExist) 
    cout<<"Yes Exist!"<<endl;
  else
    cout<<"Not Exist"<<endl;
  return 0;
}