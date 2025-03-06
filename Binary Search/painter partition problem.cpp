// GFG The Painter's Partition Problem-II
// TC: o(NlogN) SC: o(1)

class Solution
{
  public:
    bool isPossible(int arr[], int n, int k, long long sol){
        long long timeSum = 0;
        int c = 1;
        
        for(int i = 0; i < n; i++){
            if(arr[i] > sol){
                return false;
            }
            if(timeSum + arr[i] > sol){
                c++;
                timeSum = arr[i];
                if(c > k){
                    return false;
                }
            }
            else{
                timeSum += arr[i];
            }
        }
        
        return true;
    }
  
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long s = 0;
        long long e = 0;
        for(int i = 0; i < n; i++){
            e += arr[i];
        }
        long long ans = -1;
        while(s <= e){
            long long mid = s + (e - s) / 2;
            if(isPossible(arr, n, k, mid)){
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