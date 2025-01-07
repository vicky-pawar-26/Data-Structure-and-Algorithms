// TC: o(n) SC: o(1)

// #include <iostream>
// #include <unordered_map>
// #include <map>
// #include <vector>
// using namespace std;

// int main() {
  
//   vector<vector<int> > arr{
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
//   };

//   for(int i = 0; i < arr.size(); i++){
//     if(i & 1){
//       for(int j = arr.size() - 1; j >= 0; j--){
//         cout<<arr[j][i]<<" ";
//       }
//     }
//     else{
//       for(int j = 0; j < arr.size(); j++){
//         cout<<arr[j][i]<<" ";
//       }
//     }
//   }
  
//   return 0;
// }