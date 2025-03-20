#include <iostream>
using namespace std;

void print(int n){
  if(n == 0) return;
  
  cout<<n%10<<" ";
  
  print(n/10);
}

int main() {
  int n = 123;
  print(n);
  return 0;
}