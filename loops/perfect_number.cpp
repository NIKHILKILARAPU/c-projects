#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,i,sum=0;
    cin>>num;
    for(i=1;i<(num/2);i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        cout<<"Perfect Number";
    }
    else{
        cout<<"Not a Perfect Number";
    }
    return 0;
}