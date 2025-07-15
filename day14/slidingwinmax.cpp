// sliding window maximum

#include<iostream>
#include<deque>
#include<vector>

using namespace std;

int main(){
    vector<int>nums={1,3,-1,-3,5,3,6,7};
    int k=3;
    deque<int>q;
    vector<int>ans;
    for(int i=0;i<k;i++){
        while(!q.empty() && nums[q.back()]<=nums[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    for(int i=k;i<nums.size();i++){
        ans.push_back(nums[q.front()]);
        while(!q.empty() && q.front()<=i-k){
            q.pop_front();
        }
        while(!q.empty() && nums[q.back()]<=nums[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(nums[q.front()]);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}