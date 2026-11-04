#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int digit[10]={0,1,2,3,4,5,6,7,8,9};
    int count[10]={0};
    cout<<"enter no of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int number = arr[i];
        while(number){
            int dig=number%10;
            count[dig]++;
            number=number/10;
        }
    }
    int maxx_count=0;
    int maxx_pos;
    for(int i=0;i<10;i++){
        if(maxx_count<count[i]){
            maxx_count=count[i];
            maxx_pos=i;
        }
    }
    cout<<"the digit which repeated max is "<<digit[maxx_pos]<<" which repeated "<<maxx_count<<" times";
    return 0;
}