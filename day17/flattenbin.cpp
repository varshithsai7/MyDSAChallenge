#include<iostream>
#include<vector>
using namespace std;
// build using preorder traversal
class Node{
    public:
    int data;
    Node* left; 
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
static int index=-1;
Node * buildtree(vector<int>&nums){
    index++;
    if(index>=nums.size() ||nums[index]==-1){
        return NULL;
    }
    Node *n=new Node(nums[index]);
    n->left=buildtree(nums);
    n->right=buildtree(nums);
    return n;
};

Node * nextright=NULL;
void flatten(Node * root){
    if(root==NULL) return;
    flatten(root->right);
    flatten(root->left);
    root->left=NULL;
    root->right=nextright;
    nextright=root;
}


int main(){
    vector<int>nums={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node * root = buildtree(nums);
    // You can add code here to test the tree structure, e.g., print the tree or check properties.
    cout << "Binary tree built successfully." << endl;
    flatten(root);
    Node *temp=root;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->right;
    }
    cout<<endl;
    return 0;
}   