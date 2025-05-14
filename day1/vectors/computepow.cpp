#include<iostream>
using namespace std;

int main(){
    //x=2.00000 n=10 ,x=2.10000 n=3,x=2.00000 n=-2
    if(n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x=-1 && n%2==0) return 1.0;
    if(x=-1 && n%2!=0) return -1.0;
    double x;
    int bf;
    cin>>x>>bf;
    double ans=1;
    while(bf>0){
        if (bf%2==1){
            ans*=x;
        }
        x*=x;
        bf/=2;
    }
    cout<<ans;
    return 0;
}