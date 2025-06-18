// maxe[][]=[[1,0,0,0],[1,1,0,1],[1,1,0,0],[0,1,1,1]]
// move from start to end
// cant go through 0, only 1 visitable once
// basecases m[r][c]=0 return r,c<0 or rows,cols>=n return
// r==n-1,c==n-1 and pb(path) return


#include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int>> &arr,int r,int c,string path,vector<string>&ans){
    int n=arr.size();
    if(r<0 || c<0 || r>=n || c>=n || arr[r][c]==0 || arr[r][c]==-1){
        return;
    }

    if(r==n-1 && c==n-1){
        ans.push_back(path);
        return;
    }


    arr[r][c]=-1;

    // down
    helper(arr,r+1,c,path+"D",ans);
    // up
    helper(arr,r-1,c,path+"U",ans);
    // right
    helper(arr,r,c+1,path+"R",ans);
    // left
    helper(arr,r,c-1,path+"L",ans);
    arr[r][c]=1;
}


vector<string> rat(vector<vector<int>>&arr){
    int n=arr.size();
    
    vector<string>ans;
    string path="";
    helper(arr,0,0,path,ans);
    return ans;
}


int main(){
    vector<vector<int>>arr={
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };

    vector<string>ans=rat(arr);
    for(string p:ans){
        cout<<p<<endl;
    }
    return 0;
    
}