#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  string str1, str2;
  getline(cin, str1);
  getline(cin, str2);
  if(str1.find(str2) != string:: npos){ // npos mean no position
    cout<<"String Found!"<<endl;
  }
  else{
    cout<<"String Not Found!"<<endl;
  }
  return 0;
}

// erase(10, 8)
// substr(1, 3) -> It will return 3 char from string starting from index 1
// replace(2, 5, str) 