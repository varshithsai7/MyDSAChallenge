// check if an arr is sorted
// arr=[1,2,3,4,5]

#include<iostream>
using namespace std;
#include<vector>

bool issorted(vector<int>arr,int n){
    if (n==0 || n==1){
        return true;
    }
    return arr[n-1]>=arr[n-2] && issorted(arr,n-1);
}

int main(){
    vector<int>arr={1,3,5,67,89};
    cout<<issorted(arr,arr.size());
    return 0;
}