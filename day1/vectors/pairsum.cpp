#include<iostream>
using namespace std;

#include<vector>
vector<int>pairsum(vector<int>v,int t){
    vector<int>ans;
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (v[i]+v[j]==t){
                ans.push_back(v[i]);
                ans.push_back(v[j]);
                return ans;
            }
        }
    }
}
int main(){
    //brute
    vector<int>v={2,7,11,15};
    int t=9;
    vector<int>ans=pairsum(v,t);
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;

//2pointer optimal
    int st=0,end=v.size()-1;
    while(st<end){
        int s=v[st]+v[end];
        if (s<t){
            st++;
        }
        else if (s>t)
        {
            end--;
        }
        else{
            cout<<v[st]<<" "<<v[end];
            break;
        }
        
    }
    return 0;

}