#include<iostream>
using namespace std;

void change(int arr[],int s){
    for(int i=0;i<s;i++){
        arr[i]=2*arr[i];
    }
}
int main(){
        int arr[5]={5,22,3,-32,1};
        for(int i=0;i<5;i++){
            cout<<arr[i]<<endl;;
        }
        cout<<sizeof(arr)/sizeof(int);
        int small=INT32_MAX;
        int large=INT32_MIN;
        for(int i=0;i<5;i++){
            small=min(small,arr[i]);
            large=max(large,arr[i]);
        }
        cout<<"small: "<<small<<endl;
        cout<<"Large "<<large<<endl;
        change(arr,5);//passed by refernce only
        for(int i=0;i<5;i++){
            cout<<arr[i]<<endl;;
        }
        return 0;
}
