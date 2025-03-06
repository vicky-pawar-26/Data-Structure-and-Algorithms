// GFG Allocate minimum number of pages
// TC: o(NlogN) SC: o(1)
//  maximum number of pages in a book allotted to a student should be minimum

// class Solution 
// {
//     public:
//     //Predicate Function to find minimum number of pages.
    
//     int isPossibleSol(int A[], int N, int M, int mid){
//         int pageSum = 0;
//         int c = 1;
        
//         for(int i = 0; i < N; i++){
//             if(A[i] > mid){         // -> If we trying to allocate pages and pages are greater than possible sol so return false
//                 return false;
//             }
//             else if(A[i] + pageSum > mid){
//                 c++;           
//                 pageSum = A[i]; 
                
//                 if(c > M){          // -> Count should not be greater than number of given student
//                     return false;
//                 }
//             }
//             else{
//                 pageSum += A[i];
//             }
//         }
//         return true;
//     }    
    
//     int findPages(int A[], int N, int M) 
//     {
//         //code here
//         if(M > N) return -1; // -> If students are greater than number books then return -1;
//         int s = 0;
//         int e = accumulate(A, A+N, 0); // -> accumulate is used to calculate array sum
//         int ans = -1;
        
//         while(s <= e){
//             int mid = s + (e - s) / 2;
//             if(isPossibleSol(A, N, M, mid)){
//                 ans = mid;
//                 e = mid - 1;
//             }
//             else{
//                 s = mid + 1;
//             }
//         }
        
//         return ans;
//     }
// };