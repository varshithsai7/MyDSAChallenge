#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int n;
    Node *left;
    Node * rt;
    Node(int v){
        n=v;
        left=rt=NULL;
    }
};

Node * insert(Node * root,int val){
    Node * temp=new Node(val);
    if(root==NULL) return temp;
    if(root->n>val){
        root->left=insert(root->left,val);
    }
    else{
        root->rt=insert(root->rt,val);
    }
    return root;
}

vector<int>getpresucc(Node * root,int key){
    Node * curr=root,*pre=NULL,*succ=NULL;
    while(curr){
        if(curr->n>key){
            succ=curr;
            curr=curr->left;
        }
        else if(curr->n<key){
            pre=curr;
            curr=curr->rt;
        }
        else{
            if(curr->left){
                pre=curr->left;
                while(pre->rt){
                    pre=pre->rt;
                }
            } 
            if(curr->rt){
                succ=curr->rt;
                while(succ->left){
                    succ=succ->left;
                }
            }
            break;
        }
    }
    return {(pre!=NULL)?pre->n:-1,(succ!=NULL)?succ->n:-1};
}


int main(){
    vector<int>arr={3,2,1,5,6,4};
    Node *root=NULL;
    for(int i:arr){
        root=insert(root,i);
    }

    for(int i:arr){
        cout<<getpresucc(root,i)[0]<<" "<<getpresucc(root,i)[1]<<endl;
    }
    return 0;
}