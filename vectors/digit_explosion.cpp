#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums;
    cout<<"if you want to end entering numbers enter -1"<<endl;
    while(true){
        int n;
        cin>>n;
        if(n==-1) break;
        nums.push_back(n);
    }
    int initial_size=nums.size();
    for(int i=0;i<initial_size;i++){
        int temp=nums[0];
        int rev=0;
        int digit;
        while(temp){
             digit=temp%10;
            rev=rev*10+digit;
            temp/=10;
        }
        while(rev){
            digit=rev%10;
            nums.push_back(digit);
            rev/=10;
        }
        
        nums.erase(nums.begin());
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}