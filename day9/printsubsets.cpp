// for n elements in array 2^n number of subsets

#include<iostream>
#include<vector>
using namespace std;

void printsub(vector<int>&arr,vector<int>&ans,int i){
    if(i==arr.size()){
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
        return ;
    }
    ans.push_back(arr[i]);
    printsub(arr,ans,i+1);
    ans.pop_back();
    printsub(arr,ans,i+1);
}

int main(){
    vector<int>arr={2,4,5,6,7};
    vector<int>ans;
    printsub(arr,ans,0);
    return 0;
}