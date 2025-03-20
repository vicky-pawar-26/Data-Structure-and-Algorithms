#include <iostream>
using namespace std;

bool checkSortedOrNot(int arr[], int size, int index){
  if(index == size - 1) return true;

  if(arr[index] > arr[index+1]) return false;

  return checkSortedOrNot(arr, size, index + 1);
}

int main() {
  int arr[] = {10, 20, 30, 40, 50};

  int size = 5;

  int index = 0;

  if(checkSortedOrNot(arr, size, index)){
    cout<<"Array is sorted!"<<endl;
  }
  else{
    cout<<"Array is not sorted!"<<endl;
  }

  return 0;
}