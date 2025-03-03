// Apporoach No. 1
// Time Complexity: o(1)
// Space Complexity: o(1)

#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  int a = 10;
  int b = 20;

  // Approach No. 1 using temp variable
  // int temp = a;
  // a = b;
  // b = temp;

  // Approach No. 2 using +, - 
  // a = a + b;
  // b = a - b;
  // a = a - b;

  // Approach No. 3 using ^ xor
  // a = a ^ b;
  // b = a ^ b;
  // a = a ^ b;

  // Approach No. 4 using tinbuilt swap method
  // swap(a, b);
  
  cout<<a<<" "<<b;
  
  return 0;
}