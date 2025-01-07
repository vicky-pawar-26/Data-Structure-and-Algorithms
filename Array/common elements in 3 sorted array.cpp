// GFG common elements
// Approach No. 1
// Using there pointer and compare elements
// TC: o(n1 + n2 + n3)

// class Solution
// {
//     public:    
//        vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
//         {
//             int a = 0, b = 0, c = 0;
//             vector<int> ans;
//             set<int> st;
//             while(a < n1 && b < n2 && c < n3){
//                 if(A[a] == B[b] && B[b] == C[c]){
//                     st.insert(A[a]);
//                     a++, b++, c++;
//                 }
//                 else if(A[a] < B[b]){
//                     a++;
//                 }
//                 else if(B[b] < C[c]){
//                     b++;
//                 }
//                 else{
//                     c++;
//                 }
//             }
//             for(auto i: st){
//                 ans.push_back(i);
//             }
//             return ans;
//         }

// };