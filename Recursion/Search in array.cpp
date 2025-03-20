#include <iostream>
using namespace std;

bool print(int arr[], int size, int target, int index){
  if(index >= size) return false;

  if(arr[index] == target) return true;

  return print(arr, size, target, index + 1);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = 5;
  int index = 0;
  int target = 10;

  if(print(arr, n, target, index)){
    cout<<"Number Found!"<<endl;
  }
  else{
    cout<<"Number not Found!"<<endl;
  }
  return 0;
}