#include<iostream>
#include<string>
using namespace std;

class Teacher{
    // properties and methods
private:
    double salary;//encapsulation helps in hiding data from others
    
public:
    string name;
    string dept;
    string subject;
    void changedpt(string newdept){
        dept=newdept;
    }
    void setsalary(double newsal){
        salary=newsal;
    }
    double getsalary(){
        return salary;
    }
};


int main(){
    Teacher t1;
    
    t1.name="shradha";
    t1.dept="cse";
    t1.subject="c++";
    t1.setsalary(275000);
    cout<<t1.name<<endl;
    cout<<t1.getsalary()<<endl;
    return 0;
}