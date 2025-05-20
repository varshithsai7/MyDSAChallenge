#include<iostream>

using namespace std;

int main(){
    int arr[]={3,1,3,4,2};
    // indx:val 0,3 1,1 2,3 3,4 4,2  starts 0->3val->4(at3indx)->2(at 4 index)->3(at2index)
    int slow=arr[0];
    int fast=arr[0];
    do{
        slow=arr[slow];
        fast=arr[arr[fast]];
    }
    while(slow!=fast);

    slow=arr[0];
    while(slow!=fast){
        slow=arr[slow];
        fast=arr[fast];
    }
    cout<<"Duplicate value:"<<slow<<endl;

    return 0;

}