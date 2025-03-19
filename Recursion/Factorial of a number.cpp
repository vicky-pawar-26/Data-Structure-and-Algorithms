#include <iostream>
using namespace std;

// Factorial of a number
int Factorial(int n){
  if(n == 0) return 1;

  int ans = n * Factorial(n - 1);
  return ans;
}


int main() {

  int n = 3;
  cout<<Factorial(n);

  return 0;
}