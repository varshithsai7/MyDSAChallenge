#include<iostream>
using namespace std;

#include<vector>
#include<stack>

int main(){
    vector<vector<int>>p={{0,1,0},
                          {0,0,0},
                          {0,1,0}};
    stack<int>s;
    int n=p.size();
    for(int i=0;i<n;i++){
        s.push(i);
    }
    while(s.size()>1){
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        if(p[a][b]==0){
            s.push(a);
        }
        if(p[a][b]==1){
            s.push(b);
        }
    }
    if (s.empty()){
        cout<<"No celebrity found"<<endl;
    }
    else{
        cout<<"Celebrity is "<<s.top()<<endl;
    }
    return 0;
}