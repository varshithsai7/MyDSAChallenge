#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v={3,4,5,6,7,8};
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    vector<int>::reverse_iterator itr;
    for(itr=v.rbegin();itr!=v.rend();itr++){
        cout<<*(itr)<<" ";
    }
    cout<<endl;
    // instead of declaring vector<int>::reverse_iterator it we can simply initialize itr using auto keyword
    
    return 0;
}