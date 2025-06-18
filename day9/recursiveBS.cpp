#include<iostream>
using namespace std;
#include<vector>

int bs(vector<int>&arr,int st,int end,int tar){
    if(st<=end){
        int mid=(st+end)/2;
        if (arr[mid]==tar){
            return mid;
        }
        else if (arr[mid]<=tar){
            return bs(arr,mid+1,end,tar);
        }
        else if(arr[mid]>tar){
            return bs(arr,st,mid-1,tar);
        }
    }
    return -1;
    
}

int main(){
    vector<int>arr={2,3,4,5,6,7,8,10,19};
    cout<<bs(arr,0,arr.size()-1,20)<<"position";
    return 0;
}