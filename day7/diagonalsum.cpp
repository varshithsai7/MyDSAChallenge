#include<iostream>
using namespace std;

int main(){
    int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=4;
    int dsum=0;
    vector<vector<int>>v={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    for(int i=0;i<n;i++){
        dsum+=mat[i][i]+mat[i][n-i-1];
        if(i==n-i-1){
            dsum-=mat[i][i];
        }
    }
    
    cout<<dsum;
    return 0;
}