#include <iostream>
using namespace std;

// Sum of natural numbers
int sum(int n){
  if(n == 0) return 0;

  int ans = n + sum(n - 1);

  return ans;

}


int main() {

  int n = 2;
  cout<<sum(n);

  return 0;
}