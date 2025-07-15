#include<iostream>
using namespace std;
#include<queue>

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<"Size of queue: "<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<endl;

    cout<<q.back()<<endl;
    q.pop();
    cout<<"Size of queue after pop: "<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<"Is queue empty? "<<(q.empty() ? "Yes" : "No")<<endl;
    cout<<"Elements in queue: ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}