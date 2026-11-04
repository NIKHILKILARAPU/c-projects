#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,digit;
    bool isdividing = true;
    cin>>num;
    int temp = num;
    while(temp){
        digit = temp%10;
        if(digit==0|| num%digit!=0){
            isdividing=false;
            cout<<"Not a self dividing number";
            break;
        }
        
        temp=temp/10;
    }
    if(isdividing){
        cout<<"self dividing number";
    }
    
}