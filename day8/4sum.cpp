#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;
vector<vector<int>>foursum(vector<int>&v){
    
    vector<vector<int>>se;
    int n=v.size();
    
    int tar=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(i>0 && v[i]==v[i-1]) continue;
        for(int j=i+1;j<n;){
            int p=j+1,q=n-1;
            while(p<q){
                long long s=(long long)v[i]+(long long)v[j]+(long long)v[p]+(long long)v[q];
                if (s<tar){
                    p++;
                }else if(s>tar){
                    q--;
                }
                else{
                    se.push_back({v[i],v[j],v[p],v[q]});
                    p++;
                    q--;
                    while(p<q && v[p]==v[p-1]) p++;
                    while(p<q && v[q]==v[q+1]) q--;
                }
            }
            j++;
            while(j<n && v[j]==v[j-1]) j++;
        }
    }
    
    return se;
}

int main(){
    vector<int>v={-2,-1,-1,1,1,2,2}; 
    for(vector<int> i : foursum(v)){
        for(int j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}