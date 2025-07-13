#include<iostream>
using namespace std;
// Leetcode problem: https://leetcode.com/problems/copy-list-with-random-pointer/

class Node{
    public:
    int val;
    Node *next;
    Node * random;
    Node(int val):val(val),next(NULL),random(NULL){}
};

class solution{
    public:
    Node* copy(Node *head){
        if(!head) return NULL;
        
        // Step 1: Create a copy of each node and insert it next to the original node
        Node *curr=head;
        while(curr){
            Node *copyNode=new Node(curr->val);
            copyNode->next=curr->next;
            curr->next=copyNode;
            curr=copyNode->next;
        }
        
        // Step 2: Set the random pointers for the copied nodes
        curr=head;
        while(curr){
            if(curr->random)
                curr->next->random=curr->random->next;
            curr=curr->next->next;
        }
        
        // Step 3: Separate the copied list from the original list
        Node *newHead=head->next;
        Node *copyCurr=newHead;
        curr=head;
        
        while(curr){
            curr->next=curr->next->next; // Restore original list
            if(copyCurr->next)
                copyCurr->next=copyCurr->next->next; // Link copied nodes
            copyCurr=copyCurr->next;
            curr=curr->next;
        }
        
        return newHead; // Return the head of the copied list
    }
    void print(Node *head){
        Node *curr=head;
        while(curr){
            cout<<"Value: "<<curr->val;
            if(curr->random)
                cout<<", Random Value: "<<curr->random->val;
            else
                cout<<", Random Value: NULL";
            cout<<endl;
            curr=curr->next;
        }
    }
};

int main(){
    solution s;
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    
    // Setting random pointers
    head->random=head->next->next; // 1 -> 3
    head->next->random=head; // 2 -> 1
    head->next->next->random=head->next; // 3 -> 2
    head->next->next->next->random=head; // 4 -> 1
    
    cout<<"Original List:\n";
    s.print(head);
    
    Node *copiedList=s.copy(head);
    
    cout<<"\nCopied List:\n";
    s.print(copiedList);
    
    return 0;
}