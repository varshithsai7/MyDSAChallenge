#include<iostream>
using namespace std;
#include<vector>
class  Node {
    public:
    int data;
    Node * left;
    Node * right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

static int i=-1;
Node *buildtree(vector<int>&nums){
    i++;
    if(i>=nums.size() || nums[i]==-1){
        return NULL;
    }
    Node * root=new Node(nums[i]);
    root->left=buildtree(nums);
    root->right=buildtree(nums);
    return root;
}

int height(Node * root){
    if(!root){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}

int count(Node * root){
    if(root==NULL){
        return 0;
    }
    return count(root->left)+count(root->right)+1;
}

int sum(Node * root){
    if(!root){
        return 0;
    }
    return sum(root->left)+sum(root->right)+root->data;
}


int main(){
    vector<int>nums={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node * root=buildtree(nums);
    cout << "Binary tree built successfully." << endl;
    cout << "Height of the tree: " << height(root) << endl;
    cout << "Number of nodes in the tree: " << count(root) << endl;
    cout << "Sum of all nodes in the tree: " << sum(root) << endl;
    return 0;

}
