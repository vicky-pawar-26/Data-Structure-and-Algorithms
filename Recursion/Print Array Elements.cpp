#include <iostream>
using namespace std;

void print(int arr[], int size, int index){
  if(index >= size) return;

  cout<<arr[index]<<" ";

  print(arr, size, index + 1);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = 5;
  int index = 0;
  print(arr, n, index);
  return 0;
}