#include<iostream>
#include<vector>
using namespace std;
void search(vector<int>&vect,int t){
    bool ist=false;
    for (int i:vect){
        if (i==t){
            cout<<"found"<<endl;
            ist=true;
            break;
        }
    }
    if (ist==false){
        cout<<"not found"<<endl;
    }

}
void reverse(vector<int>&vect){
    int start=0,end=vect.size()-1;
    while(start<end){
        swap(vect[start],vect[end]);
        start++;
        end--;
    }
}

int main(){
    vector<int>vect={2,3,4,5};
    search(vect,4);
    reverse(vect);
    for (int i:vect){
        cout<<i<<" ";
    }
    return 0;

}