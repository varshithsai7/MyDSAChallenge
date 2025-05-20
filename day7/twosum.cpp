#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={5,2,11,7,15};
    unordered_map<int,int>mp;
    vector<int>v;
    int target=18;
    for(int i=0;i<arr.size();i++){
        int first=arr[i];
        int second=target-first;
        if(mp.find(second)!=mp.end()){//ifnot found sends an iterator name iterator
            v.push_back(first);
            v.push_back(second);
            break;
        }
        mp[arr[i]]=i;
    }
    cout<<"Pair "<<v.front()<<" "<<v.back();
    return 0;

}