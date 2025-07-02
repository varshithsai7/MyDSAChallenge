#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        this->data=val;
        next=NULL;
    }
};

class ListNode{
    private:
    Node * head;
    Node * tail;
    public:
    ListNode(){
        head=tail=NULL;
    }
    void pushfront(int val){
        Node * newnode=new Node(val);
        // Node newNode(val);static deletes after going out of the block
        if(head==NULL){
            head=tail=newnode;
            return;
        }
        newnode->next=head;//(*newnode).next=head
        head=newnode;
    }
    void pushback(int val){
        Node * newnode=new Node(val);
        // Node newNode(val);static deletes after going out of the block
        if(head==NULL){
            head=tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=newnode;
    }
    void print(){
        Node * temp=head;
        while(temp!=NULL){
            cout<<" "<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void reverse(){
        if(head==NULL){
            return;
        }
        Node * curr=head;
        Node * nt;
        Node * prev=NULL;
        while(curr!=NULL){
            nt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nt;
        }
        head=prev;
    }
};

int main(){
    ListNode l1;
    l1.pushback(4);
    l1.pushfront(3);
    l1.pushfront(2);
    l1.print();
    l1.reverse();
    l1.print();
    l1.reverse();
    l1.print();
    return 0;
}