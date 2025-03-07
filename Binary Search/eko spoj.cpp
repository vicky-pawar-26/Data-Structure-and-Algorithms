// Eko Spoj 
// TC: o(NlogN) SC: o(1)

#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

bool isPossible(vector<ll>& trees, ll m, long long mid){
  ll woodCollet = 0;
  for(ll i = 0; i < trees.size(); i++){
    if(trees[i] > mid){
      woodCollet += trees[i] - mid;
    }
  }
  return woodCollet >= m;
}

ll maxBladeHeight(vector<ll>& trees, ll m){
  ll s = 0, e, ans = -1;
  e = *max_element(trees.begin(), trees.end());
  while(s <= e){
    ll mid = s + (e - s)/2;
    if(isPossible(trees, m, mid)){
      ans = mid;
      s = mid + 1;
    }
    else{
      e = mid - 1;
    }
  }
  return ans;
}

int main() {
  ll n, m;
  cin>>n>>m;
  vector<ll> trees;
  while(n--){
    ll height;
    cin>>height;
    trees.push_back(height);
  }
  cout<<maxBladeHeight(trees, m);
  return 0;
}