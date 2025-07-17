#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node {
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

Node *buildtree(vector<int>& nums, int &index) {
    index++;
    if(index >= nums.size() || nums[index] == -1) {
        return NULL;
    }
    Node *n = new Node(nums[index]);
    n->left = buildtree(nums, index);
    n->right = buildtree(nums, index);
    return n;
}

void preorder(Node* root){
        if(root==NULL){
            return ;
        }
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);  
    };

void inorder(Node* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    };

void postorder(Node* root){
        if(root==NULL){
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    };

void levelorder(Node * root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL); // To mark the end of the current level
    while(!q.empty()){
        Node * temp=q.front();
        q.pop();
        if(temp==NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL); // Add a new marker for the next level
                continue;
            }
            else{
                break;
            }
        }
        cout << temp->data << " ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

void levelo(Node * root){
    if(root==NULL){
        return;
    }   
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node * temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

int main(){
    vector<int> nums = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    int index = -1;
    Node * root=buildtree(nums, index);
    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    cout << "Level Order Traversal: ";
    levelorder(root);
    cout << endl;

    cout << "Level Order Traversal (without NULL markers): ";
    levelo(root);       
    // Clean up memory (not shown here, but should be done in practice)
    // You can add code here to delete the tree nodes if necessary.     

    return 0;
}