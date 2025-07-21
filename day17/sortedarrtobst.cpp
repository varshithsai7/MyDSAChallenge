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
        left=NULL;
        right=NULL;
    }
};

Node * build(vector<int>&nums,int st,int end){
    if(st>end) return NULL;
    int m=st+(end-st)/2;
    Node * root=new Node(nums[m]);
    root->left=build(nums,st,m-1);
    root->right=build(nums,m+1,end);
    return root;
}

void preorder(Node * root){
    if(root){
        cout<<root->val<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(Node * root){
    if(root){
        inorder(root->left);
        cout<<root->val<<" ";
        inorder(root->right);
    }
}


int main(){
    vector<int>arr={-10,-1,0,3,5};
    Node * root=build(arr,0,arr.size()-1);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    return 0;
}