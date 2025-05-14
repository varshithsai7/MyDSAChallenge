// [3,4,5,6,7,0,1,2] tar=0
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v={3,4,5,6,7,0,1,2};
    int tar,flag=0;
    cout<<"target:"<<endl;
    cin>>tar;
    int st=0,end=v.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if (v[mid]==tar){
            cout<<"found"<<endl;
            flag=1;
            break;
        }
        if(v[st]<=v[mid]){
            if (v[st]<=tar && tar<v[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{
            if (v[mid]<tar && tar<=v[end]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    if(flag==0){
        cout<<"NOt found";
    }
    return 0;
}