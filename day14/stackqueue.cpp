// stack using queue and queue using stack
#include<iostream>
using namespace std;
#include<queue>
#include<stack>
class StackUsingQueue {
    queue<int> q1, q2;  
public:
    void push(int x) {
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    int pop(){
        if(q1.empty()){
            cout << "Stack is empty" << endl;
            return -1;
        }
        int p=q1.front();
        q1.pop();
        return p;
    }
    int top(){
        if(q1.empty()){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return q1.front();
    }
    bool empty() {
        return q1.empty();
    }
    void display() {
        queue<int> temp = q1;
        while(!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

class QueueUsingStack {
    stack<int> s1, s2;
    public:
    void push(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    int pop(){
        if(s1.empty()){
            cout << "Queue is empty" << endl;
            return -1;
        }
        int c=s1.top();
        s1.pop();
        return c;
    }
    bool empty() {
        return s1.empty();
    }
    int front(){
        if(s1.empty()){
            cout << "Queue is empty" << endl;
            return -1;
        }
        return s1.top();
    }
    void display() {
        stack<int> temp = s1;
        while(!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

int main() {
    StackUsingQueue stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    cout << "Top of stack: " << stack.top() << endl; // 3
    cout << "Popped from stack: " << stack.pop() << endl; // 3
    cout << "Top of stack after pop: " << stack.top() << endl; // 2

    QueueUsingStack queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);
    cout << "Front of queue: " << queue.front() << endl; // 1
    cout << "Popped from queue: " << queue.pop() << endl; // 1
    cout << "Front of queue after pop: " << queue.front() << endl; // 2

    cout << "Stack elements: ";
    stack.display(); // 2 1
    cout << "Queue elements: ";
    queue.display(); // 2 3 
    return 0;
}