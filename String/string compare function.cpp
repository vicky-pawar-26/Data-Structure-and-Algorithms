// Compare string 
// TC: o(n) SC: o(1)

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool compareString(string str1, string str2){
  if(str1.length() != str2.length()) return false;
  int i = 0;
  int j = 0;

  while(i < str1.length() && j < str2.length()){
    if(str1[i++] != str2[j++]) return false;
  }

  return true;
}

int main() {
  string str1, str2;
  getline(cin, str1);
  getline(cin, str2);
  if(compareString(str1, str2)){
    cout<<"Matched!"<<endl;
  }
  else{
    cout<<"Not Matched!"<<endl;
  }
  return 0;
}