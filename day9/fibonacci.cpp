// tn=tn-1 + tn-2
// 0 1 1 2 3 5 8
// find nth fibonacci term

// using recursion

#include<iostream>
using namespace std;

int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}

// 2^0 +.... 2^n-1 =2^0 *  2^n -1/2-1 =2^n - 1
// O(2^n)



