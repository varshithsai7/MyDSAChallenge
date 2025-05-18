#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int  main(){
    string s="hi hello welcome";
    
    // first reverse the entire string then reverse the individual words
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    int n=s.length();
    string ans="";
    for(int i=0;i<n;i++){
        string word="";
        while(i<n && s[i]!=' '){
            word+=s[i];
            i++;
            
        }
        reverse(word.begin(),word.end());
        if (word.length() >0) {
            ans+=" "+word;
        }
    }
    cout<<ans;
    return 0;
}