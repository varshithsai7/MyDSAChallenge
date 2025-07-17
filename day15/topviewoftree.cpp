#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

static int index=-1;
Node *buildtree(vector<int>&nums){
    index++;
    if(index>=nums.size() || nums[index]==-1){
        return NULL;
    }
    Node * root=new Node(nums[index]);
    root->left=buildtree(nums);
    root->right=buildtree(nums);
    return root;
}

void topview(Node * root){
    queue<pair<Node *,int>>q;
    map<int,Node*>mp;

    q.push({root,0});
    while(!q.empty()){
        Node * curr=q.front().first;
        int v=q.front().second;//current horizontal distance
        
        q.pop();

        if(mp.find(v)==mp.end()){
            mp[v]=curr;
        }
        if(curr->left){
            q.push({curr->left,v-1});
        }
        if(curr->right){
            q.push({curr->right,v+1});
        }
    }
    for(auto it:mp){
        cout<<it.second->val<<" ";
    }
    cout<<endl;
}

void bottomview(Node * root){
    queue<pair<Node*,int>>q;
    map<int,Node*>mp;

    q.push({root,0});
    while(!q.empty()){
        Node * curr=q.front().first;
        int cdata=q.front().second;

        q.pop();
        mp[cdata]=curr;

        if(curr->left){
            q.push({curr->left,cdata-1});
        }
        if(curr->right){
            q.push({curr->right,cdata+1});
        }
    }

    for(auto it:mp){
        cout<<it.second->val<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>nums={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node * root=buildtree(nums);
    topview(root);
    bottomview(root);
    return 0;

}