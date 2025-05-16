// [1,2,8,4,9]  cows should befar and we should get the minimum of the distance

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool ispossible(vector<int> &v,int n,int m,int mi){
    int cows=1,lastpos=v[0];
    for(int i=0;i<n;i++){
        if (v[i]-lastpos >= mi){
            cows++;
            lastpos=v[i];
        }
        if(cows==m){
            return true;
        }
    }
    return false;
}


int main(){
    vector<int>v={1,2,8,4,9};
    int n=5,m=3;
    sort(v.begin(),v.end());
    // 5 positions 3 cows
    
    int minval=v[0];
    int maxval=v[n-1];
    
    int st=1;
    int end=maxval-minval;
    int ans=0;
    while(st<=end){
        int mid=st+(end-st)/2;
        if (ispossible(v,n,m,mid)){
            ans=mid;
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<"Minimum distance possible:"<<ans;
    return 0;
}