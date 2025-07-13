#include<iostream>
using namespace std;
#include<vector>
#include<stack>

int main(){
    vector<int>prices={100,80,60,70,60,75,85};
    vector<int>span(prices.size(),0);
    stack<int>s;

    for(int i=0;i<prices.size();i++){
        while(s.size()>0 && prices[i]>=prices[s.top()]){
            s.pop();
        }

        if(s.empty()){
            span[i]=i+1;
        }
        else{
            span[i]=i-s.top();
        }
        s.push(i);
    }
    for(int i=0;i<span.size();i++){
        cout<<span[i]<<" ";

    }
    cout<<endl;
    return 0;
}