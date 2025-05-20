#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

int main(){
    vector<vector<int>>v={{1,9,2},
                          {4,5,6},
                          {7,8,9}};
    int expsum=0,actual=0;
    unordered_set<int>s;
    int n=v.size();
    int miss,rep;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            actual+=v[i][j];
            if(s.find(v[i][j])!=s.end()){
                rep=v[i][j];
                break;
            }
            s.insert(v[i][j]);
        }
    }
    cout<<"Repeated:"<<rep<<endl;
    expsum=((n*n)*((n*n)+1))/2;
    // expsum + repeated - missed = actual
    miss=expsum+rep-actual;
    cout<<"Miss:"<<miss;
    return 0;
}