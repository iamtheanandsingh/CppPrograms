#include <iostream>

using namespace std;

void sum(int, int);

void sub(int x, int y)
{
    cout<<"Difference Of A And B Is : "<<x-y;
}

int main()
{
    int x,y;
    cout<< "Enter A :"<<flush;
    cin>>x;
    cout<< "Enter b :"<<flush;
    cin>>y;
    sum(x,y);
    sub(x,y);    
    return 0;
}

void sum(int x, int y)
{
    cout<<"Sum Of A And B Is : "<<x+y;
}