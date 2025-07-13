#include<iostream>
#include<vector>
using namespace std;
// LIFO
// we can create a stack using an array or a vector but in array there exits size limitation

class stack{
    vector<int>arr;
    public:
    stack(){
        cout<<"stack created"<<endl;
    }
    void push(int val){
        arr.push_back(val);
    }

    void pop(){
        arr.pop_back();
    }

    void print(){
        for(int i:arr){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    int top(){
        return arr[arr.size()-1];
    }

    bool isEmpty(){
        return arr.size()==0;
    }
};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.print();
    s.pop();
    s.print();
    cout<<"Top element: "<<s.top()<<endl;
    cout<<"Is stack empty? "<<(s.isEmpty() ? "Yes" : "No")<<endl;
    return 0;
}