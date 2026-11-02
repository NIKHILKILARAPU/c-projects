#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter n value: ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=1;j<=(arr[i]/2);j++){
        if(arr[i]%j==0){
            sum=sum+j;
        }
      }
      if(sum==arr[i]){
        count++;
      }
      sum=0;
    }
    cout<<"number of perfect numbers: "<<count;
}