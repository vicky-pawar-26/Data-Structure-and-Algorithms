// Apporoach No. 1
// Time Complexity: o(n)
// Space Complexity: o(1)

#include <iostream>
using namespace std;

void displayArray(int* arr, int size){
  for(int i = 0; i < size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){

  int arr[5] = {1, 2, 3, 4, 5};
  
  int i = 0;
  int j = 4;

  while(i <= j){
    swap(arr[i++], arr[j--]);
  }

  displayArray(arr, 5);
  return 0;
}