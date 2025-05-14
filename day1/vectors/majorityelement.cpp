#include<iostream>
#include<vector>
using namespace std;
#include <algorithm>
//majority element occurence>floor(n/2) times


int main(){
    vector<int>v={1,2,2,1,1};
    int n=v.size();
    //brute 
    for (int i :v){
        int f1=0;
        for(int d:v){
            if (d==i){
                f1++;
            }
        }
        if(f1>n/2){
            cout<<i<<endl;
            break;
    }
}
    //

    sort(v.begin(),v.end());

    int f=1,ns=v[0];
    for(int i=1;i<n;i++){
        if(v[i]== v[i-1]){
            f++;
        }else{
            f=1;
            ns=v[i];
        }
        if (f>n/2){
            cout<<ns<<endl;
        }
        }

        //moores voting algo 
        int frq=0,ans=0;
        for(int i=0;i<n;i++){
            if (frq==0){
                ans=v[i];
            }
            if (ans==v[i]) frq++;
            else frq--;
        }
        cout<<ans<<" ";
    }




