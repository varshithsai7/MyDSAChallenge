#include<iostream>
#include<string>

using namespace std;

class stu{
public://compile time polymorphism
    void show(int x){
        cout<<" int "<<x<<endl;
    }
    void show(char s){
        cout<<" char "<<s<<endl;
    }
};

class parent{
public:
    void show(){
        cout<<"Parent class"<<endl;
    }
    virtual void hello(){
        cout<<"Hi from parent"<<endl;
    }
};
class child:parent{
public:
    void show(){
        cout<<"child class"<<endl;
    }
    void hello(){
        cout<<"Hi from child"<<endl;
    }
};

int main(){
    stu p;
    p.show('&');
    p.show(1);
    child c;
    c.show();
    c.hello();
    return 0; 
}