#include<iostream>
#include<vector>

using namespace std;

void allsub(vector<int>&arr,vector<vector<int>>&ans,int i,vector<int>a){
    if (i==arr.size()){
        ans.push_back({a});
        return;
    }
    a.push_back(arr[i]);
    allsub(arr,ans,i+1,a);
    a.pop_back();
    allsub(arr,ans,i+1,a);
    return;
}

int main(){
    vector<int>arr={1,2,3,4,5};
    vector<int>a;
    vector<vector<int>>ans;
    allsub(arr,ans,0,a);
    for(vector<int>i : ans){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}