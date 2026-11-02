#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,i,big,small;
    cout<<"enter first numbers: ";
    cin>>num1;
    cout<<"enter second numbers: ";
    cin>>num2;
    big = (num1>num2)?num1:num2;
    small = (num1<num2)?num1:num2;
    for(i=1;i<=small;i++){
        if(i*big%small==0){
            cout<<"LCM is: "<<i*big;
            break;
        }
    }
    return 0;
}