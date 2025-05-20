// sieve of eratosthenes
// here till thegiven integer all are considered as primes and each is verified and made as false later

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter number";
    cin>>n;
    vector<bool>isprime(n+1,true);//make a vector consisting of trues all over later multiples of primes can be made as false
    for(int i=2;i<n;i++){
        if(isprime[i]){
            count++;
            for(int j=i*2;j<n;j+=i){
                isprime[j]=false;
            }
        }
    }
    cout<<count<<" primes"<<endl;
    for(int i=2;i<n;i++){
        if (isprime[i]){
            cout<<i<<":"<<"Prime"<<endl;
        }
        else{
            cout<<i<<":"<<"NotPrime"<<endl;
        }
    }
    return 0;
}