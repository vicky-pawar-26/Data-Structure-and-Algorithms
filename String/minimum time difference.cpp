// LEETCODE 539
// Minimum time difference
// TC: o(NlogN) SC: o(1)

// class Solution {
// public:
//     int findMinDifference(vector<string>& timePoints) {
//         vector<int> minutes;
//         int n = timePoints.size();
//         for(int i = 0; i < n; i++){
//             string curr = timePoints[i];
//             int hours = stoi(curr.substr(0, 2)) * 60;
//             int minu = stoi(curr.substr(3, 2));
//             int totalMinu = hours + minu;
//             minutes.push_back(totalMinu);
//         }

//         sort(minutes.begin(), minutes.end()); // Becoz to avoid comparisions
//         int mini = INT_MAX;
//         for(int i = 0; i < minutes.size() - 1; i++){
//             int diff = minutes[i+1] - minutes[i];
//             if(diff < mini) mini = diff;
//         }
//         int lastDiff = minutes[0] + 1440 - minutes[minutes.size() - 1];
//         mini = min(mini, lastDiff);
//         return mini;
//     }
// };