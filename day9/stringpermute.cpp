#include<iostream>
#include<vector>
using namespace std;

void per(vector<char>&arr,vector<vector<char>>&ans,int ind){
    if(ind==arr.size()){
        ans.push_back({arr});
        return;
    }
    for(int i=ind;i<arr.size();i++){
        swap(arr[ind],arr[i]);
        per(arr,ans,ind+1);
        swap(arr[ind],arr[i]);
    }
}

int main(){
    vector<char>arr={'a','b','c','d'};
    vector<vector<char>>ans;
    per(arr,ans,0);
    for(vector<char>i:ans){
        for(char j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}