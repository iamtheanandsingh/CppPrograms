#include<iostream>

using namespace std;

int main()
{
    int A[100], B[100], C[100], n, m, max=0;
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
    if(m>n)
    {   
        max = m;
        for(int i=m; i>n-1;i--)
        {
            A[i]=0;
        }
    }
    else if(m<n)
    {
        max = n;
        for(int i=n; i>m-1;i--)
        {
            B[i]=0;
        }
    }
    cout<<"Sum Of Arrays A and B is :";
    for(int i=0; i<max; i++)
    {
        C[i]= A[i]+B[i];
        cout<<C[i]<<" ";
    }
    return 0;
}