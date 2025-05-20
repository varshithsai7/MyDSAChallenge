#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a num"<<endl;
    cin>>n;
    int t=n;
    int ans=0;
    while(n!=0){
        if(ans>INT32_MAX/10 || ans<INT32_MIN/10){
            cout<<"OUT of bound";
            return 0;
        }
        ans=ans*10 + n%10;
        n=n/10;
    }
    if (t==ans){
        cout<<"Palindrome";
        return 0;
    }
    cout<<"NOt a Palindrome";
    return 0;
}