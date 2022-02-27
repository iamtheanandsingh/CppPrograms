#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int A[100], a = 0, B[100], b = 0, sum = 0, n, m;
    cout<<"Enter Number Of Elements In Array A :";
    cin>>n;
    cout<<"Enter Number Of Elements In Array B :";
    cin>>m;
    cout<<"Enter Elements In Array A : "<<endl;
    for(int i=0; i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter Elements In Array B : "<<endl;
    for(int i=0; i<m;i++)
    {
        cin>>B[i];
    }
    for(int i=0; i<n;i++)
    {
        a = a + A[i]*pow(10,n-i-1);
    }
    for(int i=0; i<m;i++)
    {
        b = b + B[i]*pow(10,m-i-1);
    }
    cout<<"Sum Of Arrays Are : "<<a+b;
    return 0;
}