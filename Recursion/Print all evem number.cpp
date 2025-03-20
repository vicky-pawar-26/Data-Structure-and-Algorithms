#include <iostream>
using namespace std;

void printAllOdds(int arr[], int n, int index){
  if(index == n) return;

  if(!(arr[index] & 1)) cout<<arr[index]<<" ";

  printAllOdds(arr, n, index + 1);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = 5;
  int index = 0;
  printAllOdds(arr, n, index);
  return 0;
}