#include<iostream>
#include<vector>
using namespace std;

void bb(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


void ss(int arr[],int n){
    int mini;
    for(int i=0;i<n-1;i++){
        mini=i;
        for(int j=i+1;j<n-1;j++){
            if (arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void is(int arr[],int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>current){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={4,1,5,2,3};
    int n=5;
    cout<<"bubblesort"<<endl;
    bb(arr,n);
    cout<<endl;
    cout<<"selectionssort"<<endl;
    ss(arr,n);
    cout<<"insertionssort"<<endl;
    is(arr,n);
    return 0;
}