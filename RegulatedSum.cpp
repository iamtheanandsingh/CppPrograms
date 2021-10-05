#include <iostream>

using namespace std;

int main(){
    int A[1000],i, j, f, x, y, B[1000], max = 0;
    cin>>y;
    cin>>x;
    for(i=0; i<x; i++)
    {
        cin>>A[i];
    }
    for(i=0; i<x-y; i++)
    {
       for(j=i; j<y; j++)
       {
            f += A[j];
        }
        B[i] = f;
        f = 0;
    }
    for(int i=0; i<x; i++)
    {
        if(B[i]>max)
        max = B[i];
    }
    cout<<max;
    return 0;
}