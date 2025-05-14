#include<iostream>
#include<vector>

using namespace std;

int main(){
    //product of array except self
    //brute divide overall product bhhy the indexed number but division not allowed
    //get product of rest
    vector<int>v={1,2,3,4};
    vector<int>v1(4,1);

    for(int i=0;i<4;i++){
        
        for(int j=0;j<4;j++){
            if (i!=j){
                v1[i]*=v[j];
            }
        }
        
    }
    for(int i:v1){
        cout<<i<<" ";
    }
    cout<<endl;

    //optimal
    //take prefix and suffix arrays
    vector<int>pr(4,1);//generally pr(n,1)
    for(int i=1;i<4;i++){
        pr[i]=pr[i-1]*v[i-1];
    }
    vector<int>suffix(4,1);
    for(int i=2;i>=0;i--){
        suffix[i]=suffix[i+1]*v[i+1];
    }
    vector<int>ans(4,1);
    for(int i=0;i<=3;i++){
        ans[i]=pr[i]*suffix[i];
    }
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;


    //more optimal
    vector<int>a(4,1);
    
    for(int i=1;i<4;i++){
        a[i]=v[i-1]*a[i-1]; 
    }
    cout<<"prefixes"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    int suf=1;
    for(int i=2;i>=0;i--){
        suf*=v[i+1];
        a[i]*=suf;
    }
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}