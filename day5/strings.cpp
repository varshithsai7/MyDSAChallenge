#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char str[]={'a','b','c','\0'};
    cout<<str<<endl;
    cout<<strlen(str)<<endl;
    // char s[100];
    // cin.getline(s,100,'$');
    // cout<<s;
    string n="learn c++";
    int st=0,end=n.length()-1;
    while(st<end){
        swap(n[st++],n[end--]);
    }
    cout<<n;
    return 0;
}