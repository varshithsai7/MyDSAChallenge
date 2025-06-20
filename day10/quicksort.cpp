#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int>&arr,int st,int end){
    int i=st-1,pi=arr[end];
    for(int j=st;j<end;j++){
        if(arr[j]<=pi){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[end],arr[i]);
    return i;
}
int partition2(vector<int>&arr,int st,int end){
    int pi=arr[st],i=st+1;
    int j=end;
    while(i<=j){
        while(i<=j){
            if (arr[i]<=pi){
                i++;
            }
            if (arr[j]>pi){
                j--;
            }
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[st],arr[j]);
    return j;
}

void quicksort(vector<int>&arr,int st,int end){
    if(st<end){
        // int pi=partition(arr,st,end);
        int pi=partition2(arr,st,end);
        quicksort(arr,st,pi-1);
        quicksort(arr,pi+1,end);
    }
}




int main(){
    vector<int>arr={32,31,17,12,8,35};
    quicksort(arr,0,arr.size()-1);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}