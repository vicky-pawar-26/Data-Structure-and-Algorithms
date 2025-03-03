// TC: o(n) SC: o(1)

#include <iostream>
using namespace std;

void printArray(int arr[], int size){
  cout<<"Printing Array: ";
  for(int i = 0; i < size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void shiftArray(int arr[], int size, int shift){
  // Ensure the final shift;

  int finalShift = shift % size;

  if(finalShift == 0 && finalShift == size){
    return;
  }

  // copy the array
  int temp[1000];
  int index = 0;
  for(int i = size - finalShift; i < size; i++){
    temp[index] = arr[i];
    index++;
  }

  // shift the array
  for(int i = size - 1; i >= 0; i--){
    if(i - finalShift >= 0) arr[i] = arr[i - finalShift];
  }
  
  for(int i = 0; i < finalShift; i++){
    arr[i] = temp[i];
  }
  
}

int main() {

  int arr[5] = {1, 2, 3, 4, 5};
  int n = 5;
  int shift = 2;

  cout<<"Before Shift: "<<endl;
  printArray(arr, n);
  shiftArray(arr, n, shift);
  cout<<"After Shift: "<<endl;
  printArray(arr, n);


  return 0;
}