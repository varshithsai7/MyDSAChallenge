// euclids algorithm

// gcd(a,b)=gcd(a-b,b) if a>b else gcd(a,b-a) gcd(0,a) is a

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int gcd(int a,int b){
    if (a==b){
        return a;
    }
    else if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }
    else{
        if (a>b){
            return gcd(a-b,b);
        }
        else{
            return gcd(a,b-a);
        }
    }
}
int main(){
    int n,m;
    cout<<"enter 2 numbers"<<endl;
    cin>>n>>m;
    cout<<"GCD"<<" : "<<gcd(n,m);
    return 0;

}