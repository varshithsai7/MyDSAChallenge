// gas station with gas and cost

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    int n=gas.size();
    int togas=0,totcost=0,st=0,currentsurplus=0;
    for(int i=0;i<n;i++){
        togas+=gas[i];
        totcost+=cost[i];
        currentsurplus+=gas[i]-cost[i];
        if(currentsurplus<0){
            currentsurplus=0;
            st=i+1;
        }
    }
    if(togas<totcost){
        cout<<"Not possible to complete the circuit";
    }
    else{
        cout<<"Starting point is: "<<st<<endl;
        cout<<"Total gas: "<<togas<<", Total cost: "<<totcost<<endl;
    }
    return 0;
}