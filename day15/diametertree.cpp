// diameter of binary tree
#include<vector>
#include<iostream>
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
int height(Node* root){
    if(root==NULL) return 0;
    return max(height(root->left),height(root->right))+1;
}

static int index=-1;
Node* buildtree(vector<int>&nums){
    index++;
    if(index>=nums.size() || nums[index]==-1){
        return NULL;
    }
    Node * root=new Node(nums[index]);
    root->left=buildtree(nums);
    root->right=buildtree(nums);
    return root;
}

int diameter(Node * root){
    if(root==NULL) return 0;
    int lt=diameter(root->left);
    int rt=diameter(root->right);
    int currentdia=height(root->left)+height(root->right);
    return max(max(lt,rt),currentdia);
}

int main(){
    vector<int>nums={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node * root=buildtree(nums);
    cout << "Diameter of the tree: " << diameter(root) << endl;
    return 0;
}