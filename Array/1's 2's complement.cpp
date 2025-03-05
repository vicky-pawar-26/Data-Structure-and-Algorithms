#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> binary){
  for(int i = 0; i < binary.size(); i++){
    cout<<binary[i]<<" ";
  }
  cout<<endl;
}

vector<int> find2sComplement(vector<int> binary){
  int n = binary.size();
  vector<int> ans(n+1, 0);

  // step: 1 - flip all the numbers
  int index = ans.size() - 1;
  for(int i = n - 1; i >= 0; i--){
    if(binary[i] == 0){
      ans[index] = 1;
    }
    else{
      ans[index] = 0;
    }
    index--;
  }
  
  // step: 2- add one
  int carry = 1;
  for(int i = ans.size() - 1; i >= 0; i--){
    int sum = ans[i] + carry;
    ans[i] = sum % 2;
    carry = sum / 2;
  }

  if(carry){
    ans[0] = carry;
  }

  return ans;
}

int main() {
  
  vector<int> binary = {0, 1, 1, 0, 1};
  vector<int> twosComp = find2sComplement(binary);
  print(twosComp);
  cout << endl;
  return 0;
}
