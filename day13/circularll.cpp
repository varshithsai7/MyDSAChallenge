#include<iostream>
using namespace std;

class Node {
    public :
    int data;
    Node * rt;
    Node *lt;
    Node(int val):data(val),rt(NULL),lt(NULL){}
};

class circular{
    Node * head;
    Node * tail;
    public:
    circular():head(NULL),tail(NULL){}

    void pushback(int val){
        Node * temp=new Node(val);
        if(!head){
            tail=head=temp;
            return;
        }
        tail->rt=temp;
        head->lt=temp;
        temp->rt=head;
        temp->lt=tail;
        tail=temp;
    }

    void pushfront(int val){
        Node * temp=new Node(val);
        if(!head){
            tail=head=temp;
            return;
        }
        head->lt=temp;
        temp->lt=tail;
        tail->rt=temp;
        temp->rt=head;
        head=temp;
    }

    void popback(){
        if(!head)return;
        Node *temp=tail;
        if(tail==head){
            head=tail=NULL;
            return;
        }
        tail=tail->lt;
        tail->rt=head;
        head->lt=tail;
        delete temp;
    }

    void popfront(){
        if(!head) return;
        Node *temp=head;
        if(head==tail){
            head=tail=NULL;
            return;
        }
        head=head->rt;
        head->lt=tail;
        tail->rt=head;
        delete temp;
    }

    void print(){
        if(!head)return;
        Node *curr=head;
        do{
            cout<<curr->data<<" <--> ";
            curr=curr->rt;
        }while(curr!=NULL && curr!=head);
        cout<<"(head)"<<endl;
    }
};

int main(){
    circular c;
    c.pushback(10);
    c.pushfront(3);
    c.print();
    c.pushback(20);
    c.pushback(30);
    c.pushfront(4);
    c.pushfront(1);
    c.print();
    c.popback();
    c.popback();
    c.print();
    c.popfront();
    c.popfront();
    c.print();
    return 0;
}