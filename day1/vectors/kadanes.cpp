#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=5;
    int arr[5]={1,2,-3,4,-5};
    //brute
    int maxi=INT32_MIN;
    for(int st=0;st<n;st++){
        int cs=0;
        for(int end=st;end<n;end++){
            cs+=arr[end];
            maxi=max(cs,maxi);
        }
        cout<<endl;
    }
    cout<<maxi<<endl;

    //kadane is sum<0 rest to 0
    int cs=0,ms=INT32_MIN;
    for(int i=0;i<n;i++){
        cs+=arr[i];
        ms=max(cs,ms);
        if(cs<0){
            cs=0;
        }
    }
    cout<<ms<<endl;
    return 0;
}