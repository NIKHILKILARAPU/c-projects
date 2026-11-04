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
    int k;
    cout<<"enter k value: ";
    cin>>k;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%k==0){
            nums.erase(nums.begin()+i);
            i--; 
        }
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}