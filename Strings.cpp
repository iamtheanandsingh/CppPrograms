#include <iostream>

using namespace std;

int main()
{
    string value1 = "Hello.";      //string is a class, whereas int etc are objects.
    string value2 = "This Is A String!";
    string value3 = value1 + value2;        //concatenation of string
    cout<< value3;


    string val;
    cin >> val;         //Taking Input For String
    cout << val;
    return 0;
}