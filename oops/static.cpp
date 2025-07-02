#include<iostream>
#include<string>
using namespace std;

void fun(){
    static int x=0;
    cout<<" x "<<x<<endl;
    x++;
};

class abc{
public:
    static int y;
    void inc(){
        y++;
        cout<<" y "<<y<<endl;
    }
};


int abc::y=0;
int main(){
    fun();
    fun();
    fun();
    abc a1;
    // a1.x=99;
    a1.inc();
    abc b1;
    b1.inc();
    return 0;
}