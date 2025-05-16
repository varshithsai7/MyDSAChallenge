// nboards with length m painters in i unit of time 1 unit of board is painted
// .find minimum time to piant all boards undr the constraints that my painter will only paint continuos sections of boards

#include<iostream>
#include<vector>

using namespace std;

bool isvalid(vector<int> &v,int n,int m,int maxi){
    int paint=1,l=0;
    for(int i=0;i<n;i++){
        if(v[i]>maxi){
            return false;
        }
        if(l+v[i]<=maxi){
            l+=v[i];
        }
        else{
            paint++;
            l=v[i];
        }
    }
    return paint<=m;
}

int pp(vector<int>&v,int n,int m){
    int maxval=INT32_MIN;
    int sum=0;
    for(int i:v){
        sum+=i;
        maxval=max(maxval,i);
    }
    int st=maxval,end=sum;
    int ans;
    while(st<=end){
        int mid=st+(end-st)/2;
        if (isvalid(v,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int>v={40,30,10,20};
    int n=4,m=2;
    cout<<"minimum time to paint :"<<pp(v,n,m)<<endl;
    return 0;
}