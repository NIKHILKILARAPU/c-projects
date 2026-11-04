#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0,non_harshad_sum=0;
    cout<<"enter no of array elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
         int temp = arr[i];
         int sum = 0;
         while(temp){
            int digit = temp % 10;
            sum += digit;
            temp /= 10;
         }
         if(arr[i]%sum==0){
                count=count+1;
            }
         else{
                non_harshad_sum += arr[i];
            }
            
    }

    cout<<"count of harshad numbers: "<<count<<endl;
    cout<<"sum of non-harshad numbers: "<<non_harshad_sum<<endl;

    return 0;
}