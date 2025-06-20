// divide and conquer

#include<iostream>
#include<vector>

using namespace std;

void mergesort(vector<int>&arr,int st,int mid,int end){
    vector<int>barr;
    int i=st,j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            barr.push_back(arr[i]);
            i++;
        }
        else{
            barr.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        barr.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        barr.push_back(arr[j]);
        j++;
    }
    for(int i=0;i<barr.size();i++){
        arr[i+st]=barr[i];
    }
}


void merge(vector<int>&arr,int l,int r){
    if(l<r){
        int mid=l+(r-l)/2;
        merge(arr,l,mid);
        merge(arr,mid+1,r);
        mergesort(arr,l,mid,r);
    }
}



int main(){
    vector<int>arr={12,31,35,8,32,17};
    merge(arr,0,arr.size()-1);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}

