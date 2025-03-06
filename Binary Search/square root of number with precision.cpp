// Find out square root of the number using binary search
// TC: o(n^2) SC: o(1)

#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;

int getSquareRoot(int input){
  int s = 0;
  int e = input;
  int ans = -1;
  while(s <= e){
    int mid = s + (e - s) / 2;
    if(mid * mid <= input){
      ans = mid;
      s = mid + 1;
    }
    else if(mid * mid > input){
      e = mid - 1;
    }
    else{
      s = mid + 1;
    }
  }
 

  return ans;
}

int main() {
  int input = 10;
  double ans = getSquareRoot(input);
  cout<<"Enter precision"<<endl;
  int precision;
  cin>>precision;
  double step = 0.1;
  for(int i = 0; i < precision; i++){
    for(double j = ans; j * j <= input; j = j + step){
      ans = j;
    }
    step /= 10;
  }
  cout<<ans;
  return 0;
}