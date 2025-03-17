#include <iostream>
using namespace std;

//Solid Diamond
int main() {
  int n;
  cin>>n;
  //upper part of solid diamond
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n - i - 1; j++){
      cout<<" ";
    }
    for(int j = 0; j < i + 1; j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  //lower part of solid diamond
  for(int i = 0; i < n; i++){
    for(int j = 0; j < i; j++){
      cout<<" ";
    }
    for(int j = 0; j < n - i; j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  return 0;
}