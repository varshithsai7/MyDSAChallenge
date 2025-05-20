#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

// sum of cubes of digits is the number itself then its a armstrong number

int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int sum=0;
    int l=n;
    int d=0;
    while(l!=0){
        d++;
        l/=10;
    }
    int t=n;
    while(n!=0){
        int k=n%10;
        sum+=round(pow(k,d));
        n=n/10;
    }
    if(sum==t){
        cout<<"armstrong number";
    }
    else{
        cout<<"not armstrong number";
    }
    return 0;
}