// permutation in string
// s1='ab' s2='eidbaooo'

#include<iostream>
#include<string>

using namespace std;

bool isFrqsame(int freq1[],int fre2[]){
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s1="ab";
    string s2="eidbaoo";
    int freq[26]={0};
    for(int i=0;i<s1.length();i++){
        freq[s[i]-'a']++;
    }
    int windsize = s1.length();
    for(int i=0;i<s2.length()i++){
        int windIdx=0,idex=i;
        int windfreq[26]={0};
        while(windIdx<windsize && idex<s2.length()){
            windfreq[s2[idex]-'a']++;
            windIdx++;
            idex++;
        }
        if(isFreqSame(freq,windFreq)){
            return true;
        }
    }
}