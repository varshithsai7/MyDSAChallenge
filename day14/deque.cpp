#include<iostream>
using namespace std;
#include<deque>

int main(){
    deque<int>q;
    q.push_back(1);
    q.push_back(2);
    q.push_front(3);
    q.push_front(4);
    cout<<"Size of deque: "<<q.size()<<endl;
    cout<<q.front()<<endl; // 4
    cout<<q.back()<<endl;  // 2
    q.pop_front();        // Removes 4
    cout<<"Size of deque after pop_front: "<<q.size()<<endl;
    cout<<q.front()<<endl; // 3
    cout<<q.back()<<endl;  // 2
    q.pop_back();         // Removes 2
    for(auto i : q){
        cout<<i<<" ";      // 3
    }
    return 0;
}