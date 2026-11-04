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
    for(int i=1;i<n;i++){
        int current_element = arr[i];
        int previous_element = arr[i-1];
        int sum=0;
        while(previous_element){
            int digit = previous_element % 10;
            sum = sum+digit;
            previous_element = previous_element/10;
        }
        if(sum == current_element){
            count=count+1;
        }
        sum = 0;
    }
    cout<<count;
    return 0;
}