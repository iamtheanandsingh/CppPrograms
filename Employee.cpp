#include <iostream>

using namespace std;

class Employee {
private:
    int a,b,c;
public:
    int d,e;
    void setData(int a1, int b1, int c1);
    void getData(){
        cout<<"The Value Of A Is : "<<a;
        cout<<"The Value Of B Is : "<<b;
        cout<<"The Value Of C Is : "<<c;
        cout<<"The Value Of D Is : "<<d;
        cout<<"The Value Of E Is : "<<e;
    }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee anand;
    anand.setData(1,2,4);
    // harry.a = 20;           //As a is a private class, it cannot be changed like this.
    anand.d = 34;
    anand.e = 69;
    anand.getData();
    return 0;
}