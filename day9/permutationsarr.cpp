#include<iostream>
#include<vector>
// all permutation are n!
using namespace std;

void getpermutations(vector<int>&arr,vector<vector<int>>&ans,int idx){

    if (idx==arr.size()){
        ans.push_back({arr});
        return;
    }
    for(int i=idx;i<arr.size();i++){
        swap(arr[idx],arr[i]);
        getpermutations(arr,ans,idx+1);
        swap(arr[idx],arr[i]);
    }
}

int main(){
    vector<vector<int>>v;
    vector<int>arr={3,4,5,6};
    getpermutations(arr,v,0);
    for(vector<int>i:v){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}