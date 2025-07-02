#include<iostream>
#include<string>
using namespace std;

class  shape{

    virtual void draw()=0;
};

class circle:public shape{
    public:
    void draw(){
        cout<<"drawing circle"<<endl;
    }
};

int main(){
    circle c1;
    c1.draw();
    return 0;
}