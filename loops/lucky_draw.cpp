#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,sum=0,digit,order=1;
    cin>>num;
    while(num!=0){
        digit = num%10;
        if(order%2==0){
         order++;
          num=num/10;
            continue;
        }
        else{
            sum = sum+digit;
        }
        order++;
        num=num/10;
    }
    cout<<sum;
    return 0;
}