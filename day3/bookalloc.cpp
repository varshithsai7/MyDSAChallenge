#include<iostream>
#include<vector>
using namespace std;

// arr[2,1,3,4]
// here we need to allocate books based on pages we allocate to two students 
// each student must get atleast one distrubuting them contiguosly sucha way that the maximum pages read are minimum

bool isvalid(vector<int>&arr,int n,int m,int maxAllowedpages){
    int stu=1,pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowedpages){
            return false;
        }
        if(pages+arr[i]<=maxAllowedpages){
            pages+=arr[i];
        }
        else{
            stu++;
            pages=arr[i];
        }
    }
    return stu>m?false:true;
}


int allocateBooks(vector<int> &arr,int n,int m){
    if(m>n){
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int st=0;
    int end=sum;
    int ans=0;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isvalid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
}


int main(){
    vector<int>v={2,1,3,4};
    int n=4,m=2;//m is students count

    cout<<allocateBooks(v,n,m)<<endl;
    return 0;
}