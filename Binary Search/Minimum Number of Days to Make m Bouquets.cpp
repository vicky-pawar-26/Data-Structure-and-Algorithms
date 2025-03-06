// leetcode 1482
class Solution {
public:
#define ll long long int
    bool isSol(vector<int> bloomDay, int mid, int m, int k){
        int count = 0;
        for(int i = 0; i < bloomDay.size(); i++){
            if(bloomDay[i] <= mid){
                count++;
            }

            if(count == k){
                m--;
                count = 0;
                if(m == 0) break;
            }
            
            if(bloomDay[i] > mid) count = 0;
        }
        return m == 0;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int s = *min_element(bloomDay.begin(), bloomDay.end());;
        int e = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;
        ll flowers = (ll)m * (ll)k;
        if(bloomDay.size() < flowers) return ans;

        while(s <= e){
            int mid = s + (e - s) / 2;

            if(isSol(bloomDay, mid, m, k)){
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