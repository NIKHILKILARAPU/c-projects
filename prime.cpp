#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,i;
    bool isPrime;
    (num>1)?isPrime=true:isPrime=false;
    cin>>num;
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            isPrime=false;
            break;
        }
        
    }
    if(isPrime){
            cout<<"Prime Number";
        }
    else{
            cout<<"Not a Prime Number";
        }    
    return 0;
}