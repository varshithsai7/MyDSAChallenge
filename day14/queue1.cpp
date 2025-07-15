#include<iostream>
using namespace std;
#include<vector>
// #include<queue>
// queue implementation using linked list

// fifo first in first out

class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data = d;
        next = nullptr;
    }
};

class Queue{
    Node *head;
    Node *tail;
    public:
    Queue(){
        head=NULL;
        tail=NULL;
    }
    void push(int v){
        Node *n=new Node(v);
        if(head==NULL){
            head=n;
            tail=n;
        }else{
            tail->next=n;
            tail=n;
        }
    }
    int pop(){
        if(head==NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        Node *tem=head;
        head=head->next;
        int x=tem->data;
        delete tem;
        return x;
    }
    int front(){
        if(head==NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }return head->data;
    }

    bool isempty(){
        return head==NULL;
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.front()<<endl; // 1
    cout<<q.pop()<<endl;   // 1
    cout<<q.front()<<endl; // 2
    cout<<q.pop()<<endl;   // 2
    q.push(4);
    q.push(5);
    cout<<q.front()<<endl; // 3
    cout<<q.pop()<<endl;   // 3
    cout<<q.front()<<endl; // 4
    cout<<q.pop()<<endl;   // 4         
    cout<<q.front()<<endl; // 5
    cout<<q.pop()<<endl;   // 5
    cout<<q.pop()<<endl;   // Queue is empty
    cout<<q.front()<<endl; // Queue is empty
    return 0;
}

