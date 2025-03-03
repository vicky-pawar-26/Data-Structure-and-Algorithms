#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {

  vector<vector<int> > v = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  int row, col;
  row = col = v.size();
  int target = 5;
  int min = INT_MAX;
  int max = INT_MIN;

  // Row wise print

  cout<<"Row Wise Print: "<<endl;

  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<"Col Wise Print: "<<endl;

  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      cout<<v[j][i]<<" ";
    }
    cout<<endl;
  }

  
  cout<<"Diagonal Print: "<<endl;

  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      if(i == j) cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<"Diagonal Print: "<<endl;

  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      if(i + j == col - 1) cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<"Searching in 2D vector"<<endl;

  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      if(v[i][j] == target) cout<<"Found"<<endl;
    }
  }

  cout<<"Print Min and Max"<<endl;

  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      if(v[i][j] > max){
        max = v[i][j];
      }
      if(v[i][j] < min){
        min = v[i][j];
      }
    }
  }
  cout << "Min: " << min << " and Max: " << max << endl;


  cout<<"Transpose of matrics"<<endl;

  for(int i = 0; i < row; i++){
    for(int j = i; j < col; j++){
     swap(v[i][j], v[j][i]);
    }
  }
  cout<<"Printing Transpose of matrics"<<endl;

  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
     cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }


  return 0;
}