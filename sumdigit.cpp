#include<bits/stdc++.h>
using namespace std;
int main(){
  int num,digit,sum=0;
  cin>>num;
  while(num!=0){
    digit = num%10;
    sum = sum+digit;
    num=num/10;
  }  
  cout<<sum;
  return 0;
}