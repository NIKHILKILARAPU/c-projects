#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,j;
    cin>>n;
    cin>>m;
    i=0;
    j=m-1;
    int dup_row=0;
    int sum=0;
    vector<vector<int>> mat;
    for(int p=0;p<n;p++){
        vector<int> row;
        for(int q=0;q<m;q++){
            int ele ;
            cin>>ele;
            row.push_back(ele);
        }
        mat.push_back(row);
    }
    
        while(i<m){
           if(i==j){
            sum= sum+mat[i][j];
          }
          else{
            sum = sum+mat[dup_row][i]+mat[dup_row][j];
          }
          i++;
          j--;
          dup_row++;

        }
        
    
    cout<<sum;

}