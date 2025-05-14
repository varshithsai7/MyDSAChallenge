#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a=10;
    cout<< &a <<endl;
    int *ptr=&a;
    cout<<ptr;
    return 0;
}