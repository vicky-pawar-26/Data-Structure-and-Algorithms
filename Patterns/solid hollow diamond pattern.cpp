#include <iostream>
using namespace std;

//Solid hollow Diamond
int main() {
  int n;
  cin>>n;
  //upper part of solid hollow diamond
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n - i - 1; j++){
      cout<<" ";
    }
    for(int j = 0; j < 2*i+1; j++){
      if(j == 0 || j == 2*i){
       cout<<"*";
      }else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
  //lower part of solid hollow diamond
  for(int i = 0; i < n; i++){
    for(int j = 0; j < i; j++){
      cout<<" ";
    }
    for(int j = 0; j < 2*n - 2 * i - 1; j++){
      if(j == 0 || j == 2*n - 2*i-1 - 1){
        cout<<"*";
      }else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}