#include<iostream>
#include<string>
using namespace std;
class Teacher{
private:
    string name;
    string dept;
    string subject;
    double salary;
public:
    Teacher(){
        cout<<"hi iam constructor"<<endl;
    }
    Teacher(string n,string d,string subject,double sal){
        name=n;
        dept=d;
        this->subject=subject;
        salary=sal;
    }
    void getinfo(){
        cout<<name<<" "<<dept<<" "<<subject<<" "<<salary<<endl;
    }
};

class student{
public:
    string name;
    string course;
    student(){

    }
    student(student &obj){
        this->name=obj.name;
        this->course=obj.course;
    }
    void getinfo(){
        cout<<" "<<name<<" "<<course<<endl;
    }

};

int main(){
    Teacher t1;
    Teacher t2("shradha","cse","java",25000);
    t2.getinfo();
    Teacher t3(t2);
    t3.getinfo();
    student s1;
    s1.name="varshith";
    s1.course="btech";
    student s2(s1);
    s2.getinfo();
    return 0;
}