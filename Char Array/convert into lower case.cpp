// Convet string into lowerCase
// TC: o(n) SC: o(1)

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void convertLowerCase(char arr[]){
  int n = strlen(arr);
  for(int i = 0; i < n; i++){
    arr[i] = arr[i] + 'a' - 'A';
  }
}

int main() {
  char arr[100];
  cin.getline(arr, 100); 
  convertLowerCase(arr);
  cout<<arr<<endl;
  return 0;
}