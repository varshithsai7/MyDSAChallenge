#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int val;
    Node * left;
    Node * right;
    Node(int v){
        val=v;
        left=right=NULL;
    }
};

Node * insert(Node *root,int val){
    if(root==NULL) {
        return new Node(val);
    }
    if(val<root->val) root->left=insert(root->left,val);
    else root->right=insert(root->right,val);
    return root;
}

Node * buildbst(vector<int>&arr){
    Node * root=NULL;
    for(int i:arr){
        root=insert(root,i);
    }
    return root;
}
void inorder(Node * root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->val<<" ";
        inorder(root->right);
    }
    return;
}

bool search(Node * root,int key){
    if(root==NULL){
        return false;
    }
    if(root->val==key) return true;
    if(root->val<=key){
        search(root->right,key);
    }
    else{
        search(root->left,key);
    }
}

Node * inorderpre(Node * root){
    if(root->left) root=root->left;
    else{
        return NULL;
    }
    while(root->right){
        root=root->right;
    }
    return root;
}
Node * delet(Node *root,int key){
    if(root==NULL) return NULL;
    if(root->val>key){
        root->left=delet(root->left,key);
    }
    else if(root->val<key){
        root->right=delet(root->right,key);
    }
    else{
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }
        if(!root->left || !root->right){
            delete root;
            return (root->left?root->left:root->right);
        }
        else{
            Node * temp=inorderpre(root);
            root->val=temp->val;
            root->left=delet(root->left,temp->val);
            return root;
        }
    }
}

int main(){
    vector<int>arr={3,2,1,5,6,4};
    Node * root=buildbst(arr);
    inorder(root);
    cout<<endl;
    cout<<(search(root,6)?"true":"false")<<" ";
    cout<<endl;
    cout<<(search(root,9)?"true":"false")<<" ";
    cout<<endl;
    Node * root1=delet(root,5);
    inorder(root1);
    cout<<endl;
    root1=delet(root,1);
    inorder(root1);
    cout<<endl;
    root1=delet(root,3);
    inorder(root1);
    // we can use inorder predecesser or inorder successer in deletion ther wont be any proble
    
    return 0;
}