#include<iostream>
#include<vector>
// [2,0,2,1,1,0,1,2,0,0]
// dutch national flag algorithm
// [l...mid-1[unsorted]...high] 
using namespace std;

int main(){
    int arr[]={2,0,2,1,1,0,1,2,0,0};
    int n=10;
    int l=0,mid=0,h=n-1;
    while(mid<=h){
        if (arr[mid]==0){
            swap(arr[mid],arr[l]);
            mid++;
            l++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[h],arr[mid]);
            h--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}