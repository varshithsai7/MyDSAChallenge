#include<iostream>
using namespace std;
#include<bits/stdc++.h>
// we can do the same using stack default library but here we are implementing our own stack using linked list


class stacky{
    list<int> l;
    public:
    stacky(){
        cout<<"Stack created"<<endl;
    }
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        if(!isempty()){
            l.pop_back();
        }else{
            cout<<"stack empty"<<endl;
        }
    }
    bool isempty(){
        return l.empty();
    }
    int top(){
        return l.back();
    }
    void print(){
        for(auto i=l.begin();i!=l.end();i++){
            cout<<*i<<" ";
        }
        cout<<endl;
    }
};

int main(){
    stacky si;
    si.push(10);
    si.push(20);
    si.push(30);
    si.push(40);
    si.push(50);
    si.print();
    si.pop();
    si.pop();
    si.print();
    cout<<si.top()<<endl;
    cout<<"Is stack empty? "<<(si.isempty() ? "Yes" : "No")<<endl;
    return 0;

}