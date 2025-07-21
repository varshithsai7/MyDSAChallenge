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

Node * lca(Node * root,Node * p,Node *q){
    if(root==NULL) return NULL;
    if(root==p || root==q) return root;
    if((root->val>p->val && root->val<q->val) || (root->val>q->val && root->val<p->val)){
        return root;
    }
    if(root->val>p->val && root->val>q->val){
        return lca(root->left,p,q);
    }
    else if(root->val<=p->val && root->val<=q->val){
        return lca(root->right,p,q);
    }
    return NULL;
}
Node * search(Node * root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->val==key) return root;
    if(root->val<=key){
        search(root->right,key);
    }
    else{
        search(root->left,key);
    }
}

int main(){
    vector<int>arr={3,2,1,5,6,4};
    Node * root=buildbst(arr);
    Node *p=search(root,5);
    Node *q=search(root,2);
    cout<<lca(root,p,q)->val<<endl;
    p=search(root,6);
    q=search(root,4);
    cout<<lca(root,p,q)->val<<endl;
    return 0;
}