#include<iostream>
#include<vector>
using namespace std;
#include<string>

class stu{
public:
    string name;
    double *cgp; 
    stu(string name,double cgpa){
        this->name=name;
        cgp=new double;
        *cgp=cgpa;
    }
    // stu(stu &obj){
    //     this->name=obj.name;
    //     this->cgp=obj.cgp;
    // }
    stu(stu &obj){
        this->name=obj.name;
        cgp=new double;
        *cgp=*obj.cgp;
    }
    void getinfo(){
        cout<<name<<*cgp;
    }

    //destructor  
    ~stu(){
        cout<<"I delete"<<endl;
        delete cgp;
    }
};


int main(){
    stu t1("varsh",8.7);
    t1.getinfo();
    stu t2(t1);
    *(t2.cgp)=9.2;
    t2.getinfo();
    t1.getinfo();
    return 0;

}