#include<iostream>
#include<vector>
#include<climits>
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
}
// validate bst
bool validate(Node *root,Node *mi,Node *ma){
    if(root==NULL) return true;
    if(mi!=NULL && root->val<=mi->val) return false;
    if(ma!=NULL && root->val>=ma->val) return false;
    return validate(root->left,mi,root) && validate(root->right,root,ma);
}

// min difference between any two 
Node * pre=NULL;
int mindist(Node *root){
    int ans=INT_MAX;  
    if(root==NULL)return INT_MAX;
    if(root->left) ans=max(ans,mindist(root->left));
    if(pre){
        ans=min(ans,root->val - pre->val);
    }
    pre=root;
    if(root->right) ans=min(ans,mindist(root->right));
    return ans;
}

// kth smallest in bst
int porder=0;
int kthsmall(Node * root,int k){
    
    if(!root) return -1;
    if(root->left){
        int l=kthsmall(root->left,k);
        if(l!=-1) return l;
    }
    if(porder+1==k) return root->val;
    porder++;
    if(root->right){
        int r=kthsmall(root->right,k);
        if(r!=-1) return r;
    }
    return -1;
}

int main(){
    vector<int>arr={3,2,1,5,7,4};
    Node * root=buildbst(arr);
    cout<<(validate(root,NULL,NULL)?"true":"false")<<endl;
    cout<<mindist(root)<<endl;
    cout<<kthsmall(root,6);
    return 0;
}