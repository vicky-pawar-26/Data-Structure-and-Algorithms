#include <iostream>
#include <limits.h>
using namespace std;

void print(int arr[], int size, int index, int& maxi){
  if(index >= size) return;

  if(arr[index] > maxi){
    maxi = arr[index];
  }

  print(arr, size, index + 1, maxi);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = 5;
  int index = 0;
  int maxi = INT_MIN;
  print(arr, n, index, maxi);
  cout<<maxi<<endl;
  return 0;
}