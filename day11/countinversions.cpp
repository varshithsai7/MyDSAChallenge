//  inversions are the pair if arr[i] and arr[j] to meet 2 conditions
// i<j arr[i]>arr[j]
// 6,3,5,2,7
// 6,3  6,5 6,2   3,2  5,2 

#include<iostream>
#include<vector>
using namespace std;

// brute
int count(vector<int>&arr){
    int c=0;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]>arr[j]){
                c++;
            }
        }
    }
    return c;
}

// optimal
int merge(vector<int>&arr,int st,int mid,int end){
    vector<int>temp;
    int i=st,j=mid+1;
    int vc=0;

    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
            vc+=(mid-i+1);
            // that means we sorted[3,6,7] is oneside then
            // [5] is other side we get vc count incremented by two
            // as simultaneously 2 greater numbers than 5 
            // thus (mid-i)+1, 2-1+1=>2
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=0;i<temp.size();i++){
        arr[i+st]=temp[i];
    }
    return vc;
}


int mergesort(vector<int>&arr,int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;
        int linvcount=mergesort(arr,st,mid);
        int rinvcount=mergesort(arr,mid+1,end);
        int invertcount=merge(arr,st,mid,end);
        return linvcount+rinvcount+invertcount;
    }
    return 0;
}


int main(){
    vector<int>arr={6,3,5,2,7};
    // cout<<"Countinversions"<<count(arr);
    int ans=mergesort(arr,0,arr.size()-1);
    cout<<ans;
    return 0;
}