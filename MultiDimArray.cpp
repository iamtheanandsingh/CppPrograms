#include <iostream>

using namespace std;

int main()
{
    string animals[][3] = 
    {
        {"fox", "Dog", "Hound"},
        {"vat", "Tiger", "Lion"}
    };

    for (int i = 0; i< sizeof(animals)/sizeof(animals[0]); i++){
        for (int j = 0; j< sizeof(animals)/sizeof(string); j++)
        {
            cout << animals[i][j]<< endl;
        }
    }
    
    return 0;
}