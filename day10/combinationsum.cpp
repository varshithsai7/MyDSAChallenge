// sum of selected multiple numbers = target
// ex arr=2,3,5 target=8 then 3,5 are the things but [2,2,2,2] and 2,3,3 are also possible

// include,multiple include, exclude 
#include<iostream>
#include<vector>
#include<set>
using namespace std;

set<vector<int>>se;


void combsum(vector<int>&arr,int i,vector<int>&combin,vector<vector<int>>&ans,int t){
    if(i==arr.size() || t<0){
        return;
    }
    if (t==0) {
        if(se.find(combin)==se.end()){
            ans.push_back({combin});
            se.insert(combin);
        }
        return;
    }
    combin.push_back(arr[i]);
    combsum(arr,i+1,combin,ans,t-arr[i]);
    combsum(arr,i,combin,ans,t-arr[i]);
    combin.pop_back();
    combsum(arr,i+1,combin,ans,t);

}

int main(){
    vector<int>arr={2,3,4,5};
    int tar=8;
    vector<int>c;
    vector<vector<int>>ans;
    combsum(arr,0,c,ans,tar);
    for(vector<int>s:ans){
        for(int i:s){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}