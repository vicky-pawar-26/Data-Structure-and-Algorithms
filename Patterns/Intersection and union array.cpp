#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  
  vector<int> arr{1, 2, 3, 4, 5};
  vector<int> brr{1, 2, 3, 6};
  vector<int> ans;
  vector<int> res;

  for(int i = 0; i < arr.size(); i++){
    for(int j = 0; j < brr.size(); j++){
      if(arr[i] == brr[j]){
        brr[j] = -1;
      }
    }
  }

  for(int i = 0; i < arr.size(); i++){
    ans.push_back(arr[i]);
  }

  for(int i = 0; i < brr.size(); i++){
    ans.push_back(brr[i]);
  }

  for(auto i:ans){
   if(i != -1){
     res.push_back(i);
   }
  }

  sort(res.begin(), res.end());

  for(auto i: res){
    cout<<i<<" "; 
  }
  
  
  return 0;
}