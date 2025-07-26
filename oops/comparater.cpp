#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

class stu:public array<int,2>{
    public:
    int r;
    string n;
    stu(int k,string s){
        r=k;
        n=s;
    }
};

int operator-(stu a,stu b){
    return a.r-b.r;
}

bool customComparator(pair<int,int>&a,pair<int,int>&b){
    return a.second<=b.second ;
}

int main(){
    stu a(1,"a");
    stu b(2,"b");
    cout<<a-b<<endl;

    vector<pair<int,int>>v={{1,2},{3,4},{5,2}};
    sort(v.begin(),v.end(),customComparator);
    for(auto i:v){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}