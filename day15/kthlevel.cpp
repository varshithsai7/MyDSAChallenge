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


void kthlevel(Node *root,int k){
    if(!root) return;
    if(k==1){
        cout<<root->data<<" ";
        return ;
    }
    kthlevel(root->left,k-1);
    kthlevel(root->right,k-1);
}



int main(){
    vector<int>nums={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node * root = buildtree(nums);
    // You can add code here to test the tree structure, e.g., print the tree or check properties.
    cout << "Binary tree built successfully." << endl;
    kthlevel(root,1);
    cout<<endl;
    kthlevel(root,2);
    cout<<endl;
    kthlevel(root,3);
    vector<int>nums2={1,2,3,4,-1,-1,-1,5,6,7,-1,-1,-1,-1,8,9,-1,-1,10,-1,-1};
    index=-1;
    Node * root2 = buildtree(nums2);
    // You can add code here to test the tree structure, e.g., print the tree or check properties.
    cout << "Binary tree built successfully." << endl;
    kthlevel(root2,1);
    cout<<endl;
    kthlevel(root2,2);
    cout<<endl;
    kthlevel(root2,3);
    return 0;
}   