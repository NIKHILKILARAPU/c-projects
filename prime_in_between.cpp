#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,num1,num2,i;
    cin>>t;
    while(t--){
        cout<<"enter first numbers: ";
        cin>>num1;
        cout<<"enter second numbers: ";
        cin>>num2;
        for(i=num1;i<=num2;i++){
            bool isPrime=true;
            for(int j=2;j<=i/2;j++){
                if(i%j==0){
                    isPrime=false;
                    break;
                }
            }
            if(isPrime && i>1){
                cout<<i<<" ";
            }
        }
    }
}