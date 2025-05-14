#include<iostream>
#include<vector>

using namespace std;

int main(){
    //buy and sell stock to get maximum profit
    //input [7,1,5,3,6,4 ] buy at 1 and sell at 6 profit is 5
    vector<int>prices={7,1,5,3,6,4};
    int mini=prices[0];
    int maxip=0;
    for(int i=1;i<6;i++){
        if (prices[i]>mini){
            maxip=max(maxip,prices[i]-mini);
        }
        else{
            mini=prices[i];
        }
    }
    cout<<"maxiprofit :"<<maxip<<endl;
    cout<<"minimum cost to buy :"<<mini;

    return 0;
}