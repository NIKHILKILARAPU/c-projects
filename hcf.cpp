#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,small,big,hcf,i;
    cout<<"enter first numbers: ";
    cin>>num1;
    cout<<"enter second numbers: ";
    cin>>num2;
    big = (num1>num2)?num1:num2;
    small = (num1<num2)?num1:num2;
    for(i=small;i>=1;i--){
        if(small%i==0){
            if(big%i==0){
                hcf=i;
                cout<<"HCF is: "<<hcf;
                break;
            }
        }
    }
    return 0;
}