#include <iostream>
using namespace std;

// Power function
int pow(int x, int n){
  if(n == 0) return 1;

  int ans = x * pow(x, n - 1);
  return ans;
}

int main() {
  int x = 3, n = 3;
  cout<<pow(x, n);
  return 0;
}