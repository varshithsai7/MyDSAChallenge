#include<iostream>
#include<string>
using namespace std;

class person{
public:
    string name;
    int age;
    // person(string name,int age){
    //     this.name=name;
    //     this.age=age;
    // }
    person(){
        cout<<"this is person class"<<endl;
    }

};

class student:public person{
public:
    int rollno;
    void getinfo(){
        cout<<"Name  "<<name;
        cout<<"age "<<age;
        cout<<"Rollno  "<<rollno;
    }
    student(){
        cout<<"student class"<<endl;
    }
};

class doctor{
public:
    string name;
    doctor(string k){
        this->name=k;
    }
};

class spec:public doctor{
    public:
    string sp;
    spec(string k1,string k2):doctor(k1){
        this->sp=k2;
    }
    void getinfo(){
        cout<<"Docter name "<<name<<endl;
        cout<<"specialization "<<sp<<endl;
    }
};



int main(){
    student s1;
    s1.name="varshith";
    s1.age=20;
    s1.rollno=47;
    s1.getinfo();
    spec s("Sreeja","pediatrics");
    s.getinfo();
    return 0;
}