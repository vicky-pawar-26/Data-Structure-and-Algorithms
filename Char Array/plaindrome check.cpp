// Palindrome or not
// TC: o(n) SC: o(1)

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

bool checkPalindrome(char arr[]){
  int s = 0;
  int e = strlen(arr) - 1;

  while(s <= e){
    if(arr[s] != arr[e]) return false;
    s++;
    e--;
  }

  return true;
}

int main() {
  char arr[100];
  cin.getline(arr, 100); 
  if(checkPalindrome(arr)){
    cout<<"Palindrome"<<endl;
  }else{
    cout<<"Not Palindrome"<<endl;
  }
  return 0;
}