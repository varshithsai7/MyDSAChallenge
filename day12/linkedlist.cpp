// linkedl list visualised as linear data structure
// dyanamic datastructure resizable during runtime
// 1->2->3->NULL

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
    Node(int val,Node * n){
        this->data=val;
        this->next=n;
    }
};

class List{
    Node * head;
    Node *tail;
    public:
    List(){
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
    void popfront(){
        if (head==NULL){
            cout<<"ITS EMPTY"<<endl;
            return;
        }
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    void popback(){
        if(head==NULL){
            cout<<"ITS EMPTY"<<endl;
            return;
        }
        Node *temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    void insert(int val,int pos){
        if(pos<0){
            cout<<"Invalid"<<endl;
        }
        if(pos==0){
            pushfront(val);
            return;
        }
        Node * temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"Invalid position"<<endl;
            }
            temp=temp->next;
        }
        Node *newnode=new Node(val);
        newnode->next=temp->next;
        temp->next=newnode;
    }

    void insertmiddle(int val){
        Node *temp=head;
        int c=1;
        while(temp!=NULL){
            temp=temp->next;
            c++;
        }
        insert(val,c/2);
    }

    void search(int val){
        int c=-1;
        Node *temp=head;
        while(temp!=NULL){
            c++;
            if(temp->data==val){
                break;
            }
            temp=temp->next;
        }
        if(c==-1){
            cout<<"Not present"<<endl;
            return;
        }
        cout<<"Present at index - "<<c<<endl;

    }
};

// 4 major functions
// popfront pushfront
// pushback popback


int main(){
    List l1;
    l1.pushfront(4);
    l1.pushfront(3);
    l1.pushfront(2);
    l1.pushback(5);
    l1.print();
    l1.popfront();
    l1.print();
    l1.popback();
    l1.print();
    l1.insert(7,2);
    l1.print();
    l1.insertmiddle(9);
    l1.print();
    l1.insertmiddle(6);
    l1.print();
    l1.search(4);
    return 0;
}