#include <iostream>

using namespace std;

int main()
{
    //Break
    for (int i = 0; i < 5;i++)
    {
        cout<<"i is "<<i;
        cout<<endl;
        if (i == 3)
        {
            break;
        }
    }

    //Continue
    for (int i = 0; i < 5;i++)
    {
        cout<<"i is "<<i;
        cout<<endl;
        if (i == 3)
        {
            continue;
        }
        cout <<"Lmao";
    }
    return 0;
}   