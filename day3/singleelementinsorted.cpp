// [1,1,2,3,3,4,4,8,8]

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>v={1,1,2,3,3,4,4,8,8};
    int st=0,end=v.size()-1;
    int mid;
    if (v.size()==1){
        return v[0];
    }
    while(st<=end){
        mid=st+(end-st)/2;
        if (mid==0 && v[mid]!=v[mid+1]) return v[mid];
        if (mid==v.size()-1 && v[mid]!=v[mid-1]) return v[mid];
        if (v[mid-1]!=v[mid] && v[mid]!=v[mid+1]){
            cout<<mid;
            break;
        }
        if(mid%2==0){
            if (v[mid-1]==v[mid]) end=mid-1;
            else st=mid+1;
        }
        else{
            if(v[mid-1]==v[mid]) st=mid+1;
            else end=mid-1;
        }
    }
    return 0;
}