#include <iostream>

using namespace std;

int main()
{
    string password = "Hello";
    cout << "Enter Password: "<< flush;

    string input;
    cin >> input;

    if (input == password)
        cout<<"Welcome! Your Password Is Correct!";
    else 
        cout<<"BZZZZT! Wrong Password!";

    return 0;
}