#include<iostream>
using namespace std;

int linearsearch(int arr[],int s,int t){//O(n)
    for(int i=0;i<s;i++){
        if(arr[i]==t){
            cout<<"found"<<endl;
            return 1;
        }
    }
    cout<<"not found"<<endl;
    return -1;
}
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int t=8;
    int k=linearsearch(arr,sizeof(arr)/sizeof(int),t);
    cout<<k;
    return 0;
}