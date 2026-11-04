#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums;
    int count=1;
    cout<<"enter -1 to end entering numbers"<<endl;
    while(true){
        int n;
        cin>>n;
        if(n==-1) break;
        nums.push_back(n);
    }
    int initial_size=nums.size();
    for(int i = 0; i < initial_size; i++){
        if (i == initial_size - 1) {
            nums.push_back(nums.front());
            nums.push_back(count);
            nums.erase(nums.begin());
            break; 
        }
        if(nums[0] == nums[1]){
            count++;
            nums.erase(nums.begin()); 
        }
        else{
            nums.push_back(nums.front());
            nums.push_back(count);     
            count = 1;                    
            nums.erase(nums.begin());     
        }
    }
    
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
        
}