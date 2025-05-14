#include<iostream>
#include<vector>
using namespace std;


int recursivebs(vector<int>v,int t,int st,int end){
    if(st<=end){
        int mid=st+(end-start)/2;
        if (t>v[mid]){
            return recursivebs(v,t,mid+1,end);
        }else if(t<v[mid]){
            return recursivebs(v,t,st,mid-1);
        }else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int>v={-1,0,3,4,5,9,12};

    int start=0,end=v.size()-1;
    int mid;
    int target;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"target"<<endl;
    cin>>target;
    int bin=0;
    while(start<end){
        mid=(start+end)/2;
        if (v[mid]==target){
            cout<<"found:"<<recursivebs(v,target,start,end);
            bin=1;
            break; 
        }
        else if (target<v[mid])
        {
            end--;
        }
        else{
            start++;
        }

    }
    if (bin==0){
        cout<<"Not found";
    }
    return 0;
}

//time complexity n->n/2->n/4 soo on till n/pow(2,k) where it shuts(value found)

//O(k) if complextiy assume n/pow(2,k)=1 n=pow(2,k)
//=> log n base 2 =k thus O(logn) is complexity