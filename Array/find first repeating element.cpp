// GFG First repeating elemt
// Approach No. 1
// Using two loops
// TC: o(n^2) SC: o(1)

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(arr[i] == arr[j]){
                    return i+1;
                }
            }
        }
        return -1;
    }
};

// Approach No. 2
// Using hashing
// TC: o(n) SC: o(1)

// class Solution {
//   public:
//     // Function to return the position of the first repeating element.
//     int firstRepeated(int arr[], int n) {
//         // code here
        
//         unordered_map<int, int> mp;
//         for(int i = 0; i < n; i++){
//             mp[arr[i]]++;
//         }
        
//         for(int i = 0; i < n; i++){
//             if(mp[arr[i]] > 1){
//                 return i + 1;
//             }
//         }
//         return -1;
//     }
// };