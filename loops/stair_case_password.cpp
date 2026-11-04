#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int initial=0;
    int prev_digit = 0;
    bool isStairCase = true;
    while(n!=0){
        int digit = n%10;
        if (initial==0){
            initial = 1;
            prev_digit = digit;
        }
        else{
            if(digit>=prev_digit){
                cout<<"Not a stair case number";
                isStairCase = false;
                break;
            }
            else{
                prev_digit = digit;
            }
        }
        n = n/10;
    }
    if(isStairCase){
        cout<<"It is a stair case number";
    }
    return 0;
}