#include<iostream>
using namespace std;

#include<vector>
#include<stack>

int main(){
    vector<int>arr={6,8,0,1,3};
    vector<int>result(arr.size(), -1);
    stack<int> s;
    for(int i=arr.size()-1;i>=0;i--){
        while(!s.empty() && s.top()<arr[i]){
            s.pop();
        }
        if(s.empty()){
            result[i]=-1;
        }
        else{
            result[i]=s.top();
        }
        s.push(arr[i]);
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
