#include<iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class ListNode {
private:
    Node* head;
    Node* tail;   
public:
    ListNode() {
        head = tail = nullptr;
    }
    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void printList() {
        Node* curr = head;
        while (curr) {
            cout << curr->data << "->";
            curr = curr->next;
        }
        cout << "nullptr" << endl;
    }
    void middleoflinkedlist(){
        if(!head || !head->next) {
            return; // List is empty or has only one element
        }
        Node * slow=head,*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        cout << "Middle of the linked list is: " << slow->data << endl;
    }
    
};
    
int main(){
    ListNode li;
    li.insert(2);
    li.insert(3);
    li.insert(4);
    li.insert(5);
    li.printList(); 
    li.middleoflinkedlist();
    return 0;
}
