// [-1,0,1,2,-1,-4]

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int brute(vector<int>v,int n){
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(v[i]+v[j]+v[k]==0){
                    cout<<"found"<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag==0){
        cout<<"Not found"<<endl;
    }
    return 0;
}

vector<vector<int>>threesum(vector<int>&num){
    int n=num.size();
    

    set<vector<int>>unq;
    for(int i=0;i<n;i++){
        int tar=-num[i];
        // since c=tar and 0=a+b+c first=a  c=-a-b tar=-num[i] next tym we subtract b
        set<int>s;
        for(int j=i+1;j<n;j++){
            int third=tar-num[j];
            if(s.find(third)!=s.end()){
                vector<int>t={num[i],num[j],third};
                sort(t.begin(),t.end());
                unq.insert(t);
            }
            s.insert(num[j]);
        }
    }
    vector<vector<int>>ans(unq.begin(),unq.end());
    return ans;
}


vector<vector<int>>threes(vector<int>&v){
    int n=v.size();
    vector<vector<int>>ans;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(i>0 && v[i]==v[i-1]) continue;

        int j=i+1,k=n-1;

        while(j<k){
            int ts=v[i]+v[j]+v[k];
            if(ts<0){
                j++;
            }
            else if(ts>0){
                k--;
            }else{
                ans.push_back({v[i],v[j],v[k]});
                j++;
                k--;
                while(j<k && v[j]==v[j-1]) j++;
            }
        }
    }
    return ans;
}

int main(){
    vector<int>v={-1,0,1,2,-1,-4};
    brute(v,6);
    cout<<"Better:"<<endl;
    for(vector<int> i : threesum(v)){
        for(int j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"optimized:"<<endl;
    for(vector<int> i : threes(v)){
        for(int j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;

}