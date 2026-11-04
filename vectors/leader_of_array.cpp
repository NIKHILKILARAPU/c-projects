#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums;
    cout<<"enter -1 to end entering numbers"<<endl;
    while(true){
        int n;
        cin>>n;
        if(n==-1) break;
        nums.push_back(n);
    }
    int initial_size=nums.size();
    for(int i=0;i<initial_size-1;i++){
        int temp=nums[0];
        if(temp>nums[1]){
            nums.push_back(temp);
        }
        nums.erase(nums.begin());
    }
    for(int i=1;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}