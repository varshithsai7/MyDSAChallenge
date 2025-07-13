#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.pop_back();
    l.push_front(5);
    l.push_front(1);
    l.pop_front();
    l.push_back(50);
    l.front();
    l.back();
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<"Size of list: "<<l.size()<<endl;
    return 0;
}