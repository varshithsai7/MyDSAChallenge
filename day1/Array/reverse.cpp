#include<iostream>
using namespace std;

void reverse(int arr[],int s){
    int st=0,end=s-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}

int main(){
    int arr[]={4,1,2,7,8,-1,2,5};
    reverse(arr,sizeof(arr)/sizeof(int));
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        cout<<arr[i]<<" ";
    }
    int sum=0,pro=1;
    for(int i=0;i<8;i++){
        sum+=arr[i];
        pro*=arr[i];
    }
    cout<<"sum :"<<sum<<"Pro :"<<pro<<endl;
    int min=0,max=0;
    for (int i=1;i<8;i++){
        if (arr[i]<arr[min]){
            min=i;
        }
        if (arr[i]>arr[max]){
            max=i;
        }
    }
    swap(arr[min],arr[max]);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //unique numbers
    for(int i=0;i<8;i++){
        int k=arr[i];
        bool isu=true;
        for(int j=0;j<8;j++){
            if (i!=j && arr[j]==k){
                isu=false;
                break;
            }
        }
        if (isu==true){
            cout<<k<<" ";
        }
    }
    cout<<endl;
    //intersection of 2 arrays
    int karr[]={1,4,5};
    for(int i=0;i<sizeof(karr)/sizeof(int);i++){
        for(int j=0;j<8;j++){
            if (karr[i]==arr[j]){
                cout<<karr[i]<<" ";
                break;
            }
        }
    }
    return 0;
}