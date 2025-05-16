// merge2sorted arrays

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int a[]={1,2,3,0,0,0};
    int b[]={2,5,6};
    int m=3,n=3;
    int ind=m+n-1;

    int i=m-1,j=n-1;
    while(i>=0 && j>=0){
        if(b[j]>=a[i]){
            a[ind--]=b[j--];
        }
        else{
            a[ind--]=a[i--];
        }
    }
    while(i>=0){
        a[ind--]=a[i--];
    }
    while(j>=0){
        a[ind--]=b[j--];
    }
    for(int i=0;i<(m+n);i++){
        cout<<a[i]<<" ";
    }
    return 0;
}