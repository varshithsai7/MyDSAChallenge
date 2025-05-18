// s=daabcbaabcbc part="abc"

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="daabcbaabcbc";
    string p="abc";
    int k=s.find(p);
    while(s.length()>0 && k<s.length()){
        s.erase(k,p.length());
        k=s.find(p);
    }
    cout<<s;
    return 0;
}
