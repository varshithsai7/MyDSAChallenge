// arr[9,4,20,3,10,5] tar=33

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int brute(vector<int>&arr,int k){
    int n=arr.size();
    int c=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k) c++;
        }
    }
    return c;
}
int opt(vector<int>&v,int k){
    int n=v.size();
    int c=0;
    vector<int>psum(n,0);

    psum[0]=v[0];
    for(int i=1;i<n;i++){
        psum[i]=psum[i-1]+v[i];
    }

    unordered_map<int,int>m;
    for(int j=0;j<n;j++){
        if(psum[j]==k) c++;
        int val=psum[j]-k;
        if(m.find(val)!=m.end()){
            c+=m[val];
        }

        if(m.find(psum[j])==m.end()){
            m[psum[j]]=0;
        }
        m[psum[j]]++;
    }
    return c;
}
int main(){
    vector<int>arr={9,4,20,3,10,5};
    int tar=33;
    int o;
    cout<<"Choose 1)brute 2)optimized"<<endl;
    cin>>o;
    if (o==1){
        cout<<"Count of subarrays with sum k:"<<brute(arr,tar)<<endl;
    }
    else{
        cout<<"Count of subarrays with sum k:"<<opt(arr,tar);
    }
    return 0;
}