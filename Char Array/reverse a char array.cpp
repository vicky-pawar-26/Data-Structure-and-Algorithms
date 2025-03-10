// Reverse Char Array
// TC: o(n) SC: o(1)

#include <iostream>
#include <string>
using namespace std;

int getLength(char arr[]){
  int len = 0;
  int i = 0;
  while(arr[i] != '\0'){
    len++;
    i++;
  }
  return len;
} 

void reverseArray(char arr[]){
  int i = 0;
  int n = getLength(arr);
  int j = n - 1;

  while(i <= j){
    swap(arr[i], arr[j]);
    i++;
    j--;
  }
}

int main() {
  char arr[100];
  cin.getline(arr, 100); 
  reverseArray(arr);
  cout<<arr;
  return 0;
}