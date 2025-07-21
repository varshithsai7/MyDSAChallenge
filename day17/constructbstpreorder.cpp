#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

class Node{
    public:
    int val;
    Node * left;
    Node *right;
    Node(int v){
        val=v;
        left=NULL;
        right=NULL;
    }
};

void inorder(Node * root){
    if(root){
        inorder(root->left);
        cout<<root->val<<" ";
        inorder(root->right);
    }
}
void inordervect(Node * root,vector<int>&ans){
    if(root){
        inordervect(root->left,ans);
        ans.push_back(root->val);
        inordervect(root->right,ans);
    }
}
void preorder(Node * root){
    if(root){
        cout<<root->val<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

Node * insert(Node * root,int i){
    if(root==NULL){
        return new Node(i);
    }
    else if(root->val<=i){
        root->right=insert(root->right,i);
    }
    else{
        root->left=insert(root->left,i);
    }
    return root;
}

Node * build(vector<int>&nums){
    Node *root=new Node (nums[0]);
    for(int i=1;i<nums.size();i++){
        root=insert(root,nums[i]);
    }
    return root;
}
Node *buildbst(vector<int>nums,int& i,int b){
    if(i>=nums.size() || nums[i]>b){
        return NULL;
    }
    Node * root=new Node (nums[i]);
    i++;
    root->left=buildbst(nums,i,root->val);
    root->right=buildbst(nums,i,b);
    return root;
}

Node * usingupper(vector<int>&ans,int& in,int upper){
    if(in>=ans.size() || upper<ans[in]) return NULL;
    Node *root=new Node(ans[in++]);
    root->left=usingupper(ans,in,root->val);
    root->right=usingupper(ans,in,upper);
    return root;
}
// merge two bst
Node * m(vector<int>&nums,int st,int end){
    if(st>end) return NULL;
    int mid=st+(end-st)/2;
    Node *r=new Node(nums[mid]);
    r->left=m(nums,st,mid-1);
    r->right=m(nums,mid+1,end);
    return r;
}
Node * merge(Node * a,Node *b){
    vector<int>ans1;
    inordervect(a,ans1);
    inordervect(b,ans1);
    sort(ans1.begin(),ans1.end());
    return m(ans1,0,ans1.size()-1);
}


int main(){
    vector<int>nums={6,3,1,4,8,9};
    Node * root=build(nums);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;


    int k1=0;
    Node *root2=buildbst(nums,k1,INT_MAX);
    inorder(root2);
    cout<<endl;
    preorder(root2);
    cout<<endl;


    vector<int> po = {8, 5, 1, 7, 10, 12};
    int k=0;
    Node *root1=usingupper(po,k,INT_MAX);
    inorder(root1);
    cout<<endl;
    preorder(root1);
    cout<<endl;

    // merge
    Node * merged=merge(root,root1);
    inorder(merged);
    cout<<endl;
    preorder(merged);
    return 0;
}