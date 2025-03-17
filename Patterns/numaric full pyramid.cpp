#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n - i - 1; j++){
      cout<<" ";
    }
    for(int j = 0; j < i + 1; j++){
      cout<<j+i+1;
    }
    int start = 2 * i;
    for(int j = 0; j < i; j++){
      cout<<start;
      start--;
    }
    cout<<endl;
  }
  return 0;
}