// chars=["a","a","b","b","c","c","c"] ['a','2','b','2','c','3']

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<char>chars={'a','a','b','b','c','c','c'};
    vector<char>ans;
    int n=chars.size();
    int i=0;
    int idx=0;
    while(i<n){
        char cu=chars[i];
        int c=0;
        while(i<n && chars[i]==cu){
            c++;
            i++;
        }
        
        chars[idx++]=cu;
        if(c>1){
            for(char i:to_string(c)){
                chars[idx++]=i;
            }
        }
    }
    chars.resize(idx);
    for(char i:chars){
        cout<<i;
    }
    return 0;
}