#include <iostream>
using namespace std;

// Print the numbers

// Head recursion
void print(int n){
  if(n == 0){
    return;
  }

  cout<<n<<" ";
  print(n - 1);
}

// Tail recursion
void printReverse(int n){
  if(n == 0){
    return;
  }

  printReverse(n - 1);
  cout<<n<<" ";
}


int main() {

  int n = 5;
  print(5);
  cout<<endl;
  printReverse(5);

  return 0;
}