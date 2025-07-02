// knight if positioned at r,c it can go to 
// r+2,c+1 r+1c+2 r+2c-1 r+1c-2
// r-2c+1 r-2c-1 r-1c-2 r-1c+2
// if for a 3*3 values range from 0 to 8 when if we reach 8 then we return true

// we need a expected value to move forward
#include<iostream>
#include<vector>

using namespace std;

bool isvalid(vector<vector<int>>&grid,int r,int c,int n,int expected){
    if(r<0 || c<0 || r>=n || c>=n || grid[r][c]!=expected){
        return false;
    }
    if(grid[r][c]==n*n - 1){
        return true;
    }
    return isvalid(grid,r-1,c-2,n,expected+1) ||
    isvalid(grid,r-2,c-1,n,expected+1) ||
    isvalid(grid,r+1,c-2,n,expected+1) ||
    isvalid(grid,r+2,c-1,n,expected+1) ||
    isvalid(grid,r-2,c+1,n,expected+1) ||
    isvalid(grid,r-1,c+2,n,expected+1) || 
    isvalid(grid,r+1,c+2,n,expected+1) ||
    isvalid(grid,r+2,c+1,n,expected+1);
}

int main(){
    vector<vector<int>>grid={{0,3,6}
                            ,{5,8,1}
                            ,{2,7,4}};
    int ans=isvalid(grid,0,0,3,1);
    if (ans==0){
        cout<<"False";
        return 0;
    }
    cout<<"True";
    return 0;
}