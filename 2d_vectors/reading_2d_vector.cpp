#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> mat;
    int n,m,ele;
    cout<<"enter no of rows: ";
    cin>>n;
    cout<<"enter no of coloumns: ";
    cin>>m;
    for(int i=0;i<n;i++){
        vector<int> row;
        for(int j=0;j<m;j++){
            cin>>ele;
            row.push_back(ele);
        }
        mat.push_back(row);
    }
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
}