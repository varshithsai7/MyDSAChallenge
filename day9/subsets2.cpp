// here duplicates may present
// first sort
// then same

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void allsub(vector<int>&arr,vector<int>&a,vector<vector<int>>&ans,int i){
    if(i==arr.size()){
        ans.push_back({a});
        return;
    }
    a.push_back(arr[i]);
    allsub(arr,a,ans,i+1);
    a.pop_back();
    int ind=i+1;
    while(ind<arr.size() && arr[ind]==arr[ind-1]){
        ind++;
    }
    allsub(arr,a,ans,ind);
}

int main(){
    vector<int>arr={2,3,3,7,7,4,9};
    sort(arr.begin(),arr.end());
    vector<int>a;
    vector<vector<int>>ans;
    allsub(arr,a,ans,0);
    for(vector<int>i:ans){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}