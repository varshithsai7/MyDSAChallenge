// [0,3,8,9,5,2] before it all are in increasing order after it are in decresing order

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>A={0,3,8,9,5,2};
    int st=0,end=A.size()-1;
    int mid;
    while(st<=end){
        mid=st+(end-st)/2;
        if(A[mid-1]<A[mid] && A[mid]>A[mid+1]) break;
        if (A[mid-1]<A[mid]) st=mid+1;
        else end=mid-1;
    }
    cout<<"Peak at:"<<mid<<": "<<A[mid];
    return 0;
}