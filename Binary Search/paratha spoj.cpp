// Eko Spoj 
// TC: o(N^2 + logN) SC: o(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleSol(vector<int>& cooksRanks, int np, int nc, int sol){
  int currP = 0; // Initially cooked parathas
  for(int i = 0; i < cooksRanks.size(); i++){
    int R = cooksRanks[i];
    int j = 1;
    int timeTaken = 0;
    while(true){
      if(timeTaken + j * R <= sol){
        currP++;
        timeTaken += j * R;
        j++;
      }
      else{
        break;
      }
    }

    if(currP >= np){
      return true;
    }
  }

  return false;
}

int minTimeToCompleteOrder(vector<int>& cooksRanks, int np, int nc){
  int s = 0;
  int highestRank = *max_element(cooksRanks.begin(), cooksRanks.end());
  int e = highestRank * (np * (np + 1) / 2);
  int ans = -1;

  while(s <= e){
    int mid = s + (e - s) / 2;
    if(isPossibleSol(cooksRanks, np, nc, mid)){
      ans = mid;
      e = mid - 1;
    }
    else{
      s = mid + 1;
    }
  }

  return ans;  
}

int main() {
  int T;
  cin>>T;
  while(T--){
    int np, nc;
    cin>>np>>nc;
    vector<int> cooksRanks;
    while(nc--){
      int R;
      cin>>R;
      cooksRanks.push_back(R);
    }
    cout<<minTimeToCompleteOrder(cooksRanks, np, nc)<<endl;
  }
  return 0;
}