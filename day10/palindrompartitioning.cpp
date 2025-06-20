// each string to be partioned and if palindrome should be returned

#include<iostream>
#include<set>
#include<vector>
using namespace std;

set<vector<string>>se;

bool palin(string s){
    int n=s.length();
    int l=0,r=n-1;
    while(l<r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}

void pp(string s,vector<vector<string>>&ans,vector<string>&sub){
    if(s.length()==0){
        ans.push_back({sub});
        return;
    }



    for(int j=0;j<s.length();j++){
        string p=s.substr(0,j+1);
        if(palin(p)){
            sub.push_back(p);
            pp(s.substr(j+1),ans,sub);
            sub.pop_back();
        }
    }
}

int main(){
    string s="aab";
    vector<vector<string>>ans;
    vector<string>sub;
    pp(s,ans,sub);
    for(vector<string>k:ans){
        for(string i:k){
            cout<<'"'<<i<<'"'<<" ";
        }
        cout<<endl;
    }
}