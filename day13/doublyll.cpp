#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;
    
    Node(int val):data(val),left(nullptr),right(nullptr){}
};

class Doubly{
    Node * head;
    Node *tail;
    public:
    Doubly():head(nullptr),tail(nullptr){}

    void pushfront(int val){
        Node * temp=new Node(val);
        if(!head){
            head=temp;
            tail=temp;
            return;
        }
        head->left=temp;
        temp->right=head;
        head=temp;
        tail->left=head;
    }

    void print(){
        Node * curr=head;
        while(curr!=NULL){
            cout<<curr->data<<" ";
            cout<<"<--> ";
            curr=curr->right;
        }
        cout<<"NULL"<<endl;
    }

    void pushback(int val){
        Node * temp=new Node(val);
        if(!head){
            head=tail=temp;
            return;
        }
        tail->right=temp;
        temp->left=tail;
        tail=temp;
    }

    void popfront(){
        if(!head) return;
        Node * temp=head;
        head=head->right;
        head->left=NULL;
        delete temp;
        if(!head){
            tail=NULL;
        }
    }

    void popback(){
        if(!head) return;
        Node * temp=tail;
        tail=tail->left;
        if(tail){
            tail->right=NULL;
        }
        else{
            head=NULL;
        }
        delete temp;
    }
};

int main(){
    Doubly d;
    d.pushfront(0);
    d.pushfront(1);
    d.pushfront(2);
    d.pushfront(3);
    
    d.print();
    d.pushback(4);
    d.pushback(5);  
    d.pushback(6);
    d.print();

    d.popfront();
    d.popfront();
    d.print();
    d.popback();
    d.print();
    return 0;
}