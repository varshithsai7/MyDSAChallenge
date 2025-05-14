#include<iostream>
#include<vector>
using namespace std;

int main(){
    //container with most water
    //heights [1,8,6,2,5,4,8,3,7]
    vector<int>h={1,8,6,2,5,4,8,3,7};
    
    
    //brute
    //put two loops and then caluculate area of each container
    int maxw=0;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            int wid=j-i;
            int h1=min(h[i],h[j]);
            maxw=max(maxw,h1*wid);
        }
    }
    cout<<"most water="<<maxw<<endl;
    
    // two pinter optimal
    int left=0,rt=8;
    int mostw=0;
    while(left<rt){
        int w=rt-left;
        
        mostw=max(mostw,min(h[left],h[rt])*w);
        if(h[left]>h[rt]) rt--;
        else left++;
    }
    
    cout<<"most water="<<mostw<<endl;
    return 0;
}