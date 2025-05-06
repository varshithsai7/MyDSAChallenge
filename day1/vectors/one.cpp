//standard template library ,vector is like dynamic array,
//vector implementation is present in STL

//vector<int>vec;  vector<int>vec={1,2,3} vector<int>vec(3,0)

#include<iostream>
using namespace std;
#include<vector>//individual headerfile for vector #include<bits/c++.h> headerfile which consists all

int main(){
    vector<int>vec;  //size 0 
    vector<int>vect={1,2,3};
    cout<<vect[0]<<endl;
    vector<int>v(4,0);//(size,values)
    cout<<v[0]<<endl<<v[1]<<endl;
    // foreach

    for(int i:vect){
        cout<<i<<" ";
    }

    cout<<"size ="<<vect.size()<<endl;
    
    //pushback

    vect.push_back(25);
    vect.push_back(15);
    vect.push_back(5);
    for(int i:vect){
        cout<<i<<" ";
    }
    cout<<endl;
    //popback
    vect.pop_back();
    vect.pop_back();
    for(int i:vect){
        cout<<i<<" ";
    }
    cout<<endl;
    //front
    cout<<vect.front()<<endl;
    cout<<vect.back()<<endl;
    cout<<vect.at(2)<<endl;
    cout<<vect.size()<<endl;
    cout<<vect.capacity()<<endl;
    
    vect.push_back(18);
    vect.push_back(8);
    vect.push_back(9);
    vect.push_back(7);
    cout<<vect.size()<<endl;
    cout<<vect.capacity()<<endl;

    return 0;
}