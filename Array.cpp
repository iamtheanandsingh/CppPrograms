#include <iostream>

using namespace std;

int main()
{
    int A[] = {1,4,3,5,7};
    for(int i =0; i< sizeof(A)/sizeof(int); i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}