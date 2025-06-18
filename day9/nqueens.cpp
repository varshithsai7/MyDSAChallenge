// no queen attacking one another

// each queen seperate row

#include<iostream>
#include<vector>
using namespace std;

bool issafe(vector<string>&b,int row,int col,int n){
   
    // vertical
    for(int i=0;i<row;i++){
        if(b[i][col]=='Q'){
            return false;
        }
    }
    // diagonal top left
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(b[i][j]=='Q'){
            return false;
        }
    }
    // top right
    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
        if(b[i][j]=='Q'){
            return false;
        }
    }
    return true;
}

void nqueens(vector<string>&b,vector<vector<string>>&ans,int row,int n){
    if(row==n){
        ans.push_back({b});
        return;
    }
    for(int j=0;j<n;j++){
        if(issafe(b,row,j,n)){
            b[row][j]='Q';
            nqueens(b,ans,row+1,n);
            b[row][j]='.';
        }
    }
}

int main(){
    int n;
    cout<<"Enter n X n"<<endl;
    cin>>n;
    vector<string>board(n,string(n,'.'));
    vector<vector<string>>ans;
    nqueens(board,ans,0,n);
    for(auto s:ans){
        for(string i:s){
            for(char j:i){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}