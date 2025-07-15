#include<iostream>
using namespace std;
#include<vector>

class cq{
    int cap;
    int *arr;
    int f,r;
    int size;
    public:
    cq(int s){
        f=0;
        cap=s;
        r=-1;
        arr=new int[cap];
        size=0;
    }
    void push(int v){
        if(size==cap){
            cout<<"Queue is full"<<endl;
            return;
        }
        r=(r+1)%cap;
        arr[r]=v;
        size++;

    }

    void pop(){
        if(size==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        else{
            cout<<"Popped element: "<<arr[f]<<endl;
            f=(f+1)%cap;
            size--;
        }
    }
    int front(){
        if(size==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(size==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[r];
    }

    bool isempty(){
        return size==0;
    }
    int getsize(){
        return size;
    }
    void display(){
        if(size==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Elements in queue: ";
        for(int i=0;i<size;i++){
            cout<<arr[(f+i)%cap]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    cq q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.display(); // 1 2 3 4 5
    cout<<"Front: "<<q.front()<<endl; // 1
    cout<<"Back: "<<q.back()<<endl;   // 5
    q.pop(); // Popped element: 1
    q.display(); // 2 3 4 5
    cout<<"Size of queue: "<<q.getsize()<<endl; // 4
    q.pop(); // Popped element: 2
    q.display(); // 3 4 5
    q.push(6);
    q.push(7);
    q.display(); // 3 4 5 6 7
    cout<<"Front: "<<q.front()<<endl; // 3
    cout<<"Back: "<<q.back()<<endl;   // 7
    q.pop(); // Popped element: 3
    q.display(); // 4 5 6 7 
    return 0;
}