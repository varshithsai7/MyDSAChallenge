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
    void pushback(int val) {
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
    bool detectCycle() {
        if (!head || !head->next) return false;

        Node* slow = head;
        Node* fast = head->next;

        while (fast && fast->next) {
            if(slow==fast) return true;
            slow=slow->next;
            fast=fast->next->next;
        }
        return false;
    }

};

int main(){
    ListNode li;
    li.pushback(1);
    li.pushback(2);
    li.pushback(3);
    li.pushback(4);
    li.pushback(5);
    li.printList();
    
    // Creating a cycle for testing
    Node* cycleStart = new Node(6);
    li.pushback(cycleStart->data);
    li.printList();
    // li.tail->next = cycleStart; // Creating a cycle
    // cout << "Cycle detected: " << (li.detectCycle() ? "Yes" : "No") << endl;

    return 0;
}