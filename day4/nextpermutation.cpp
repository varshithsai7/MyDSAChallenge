// A=[1,2,3,6,5,4]  124356

#include<iostream>
#include<vector>

#include<algorithm>
using namespace std;

int main(){
    vector<int>arr={1,2,3,6,5,4};
    int  n=6;
    // int i=n-2;
    // int m;
    // while(i>0){
    //     if(arr[i]<arr[i+1]){
    //         m=i;
    //         swap(arr[m],arr[n-1]);
    //         break;
    //     }
    //     else{
    //         continue;
    //     }
    // }
    int piv=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            piv=i;
            break;
        }
    }
    if (piv==-1){
        reverse(arr.begin(),arr.end());
        
    }
    else{
        for(int i=n-1;i>piv;i--){
            if(arr[i]>arr[piv]){
                swap(arr[i],arr[piv]);
                break;
            }
        }

        // reverse
        int i=piv+1,j=n-1;
        while(i<=j){
            swap(arr[i++],arr[j--]);
        }
    }
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}