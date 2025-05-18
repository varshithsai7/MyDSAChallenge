// Ac3?e3c&a ignore special chars turn all to lower chars

#include<iostream>
#include<string>

using namespace std;

int main(){
    string s="Ac3?e3c&a";
    string a="Abcdedcb";
    // s=a;
    int st=0,end=s.length()-1;
    for(int i=0;i<end+1;i++){
        s[i]=tolower(s[i]);
    }
    int flag=0;
    while(st<end){
        if (!isalnum(s[st])){
            st++;
            continue;
        }
        if (!isalnum(s[end])){
            end--;
            continue;
        }
        else if(s[st]!=s[end]){
            flag=1;
            break;
        }
        else if(s[st]==s[end]){
            st++;
            end--;
        }
    }
    if (flag==0){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
}
