#include <iostream>
#include <limits.h>
using namespace std;

void print(int arr[], int size, int index, int& mini){
  if(index >= size) return;

  if(arr[index] < mini){
    mini = arr[index];
  }

  print(arr, size, index + 1, mini);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = 5;
  int index = 0;
  int mini = INT_MAX;
  print(arr, n, index, mini);
  cout<<mini<<endl;
  return 0;
}