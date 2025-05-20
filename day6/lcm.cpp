#include<iostream>
#include<vector>

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
    cout<<"Enter 2 numbers";
    cin>>n>>m;
    int lcm=(n*m)/gcd(n,m); 
    // since lcm * gcd = n * m
    cout<<"LCM"<<" "<<lcm<<endl;
}