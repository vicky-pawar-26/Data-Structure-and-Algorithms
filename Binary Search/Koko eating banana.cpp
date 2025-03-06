// leetcode 875
// Using binary search
// TC: o(log(maxPiles)) * o(n) -> o(n*log(maxPiles))
// SC: o(1)

class Solution {
public:
    #define ll long long int
    ll isPossible(vector<int> piles, ll mid){
        ll totalHrs = 0;
        for(ll i = 0; i < piles.size(); i++){
            totalHrs += ceil(piles[i]/(double)mid);
        }
        return totalHrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int s  = 1;
        int e = *max_element(piles.begin(), piles.end());
        int ans = -1;

        while(s <= e){
            int mid = s + (e - s) / 2;
            ll possibleSol = isPossible(piles, mid);
            cout<<"p->"<<possibleSol<<" ";
            if(possibleSol <= h){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return ans;
    }
};