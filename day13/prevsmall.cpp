#include<iostream>
using namespace std;
#include<vector>
#include<stack>

int main(){
    vector<int>p={3,1,0,8,6};
    vector<int>res(p.size(), 0);
    stack<int>s;
    for(int i=0;i<p.size();i++){
        while(!s.empty() && p[i]<=s.top()){
            s.pop();
        }
        if(s.empty()){
            res[i]=-1;
        }else{
            res[i]=s.top();
        }
        s.push(p[i]);
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}