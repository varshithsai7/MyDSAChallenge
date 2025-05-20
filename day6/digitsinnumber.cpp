#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int count=0;
    int sum=0;
    vector<int>nums;
    while(n!=0){
        count++;
        int k=n%10;
        sum+=k;
        nums.push_back(k);
        n=n/10;
    }
    cout<<"number of digits"<<count<<endl;
    cout<<"sum:"<<sum<<endl;
    reverse(nums.begin(),nums.end());
    for(int i:nums){
        cout<<i<<" ";
    }
    return 0;
}