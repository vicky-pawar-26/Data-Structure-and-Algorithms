// Replaces spaces by @
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

void replaceArray(char arr[]){
  int n = getLength(arr);   
  for(int i = 0; i < n; i++){
    if(arr[i] == ' '){
      arr[i] = '@';
    }
  }
}

int main() {
  char arr[100];
  cin.getline(arr, 100); 
  replaceArray(arr);
  cout<<arr;
  return 0;
}