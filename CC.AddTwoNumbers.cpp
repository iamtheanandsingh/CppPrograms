#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
   int t, sum[100];
   cin>>t;
   int a,b;
   for(int i=0; i<t; i++)
   {
       cin>>a>>b;
       sum[i]=a+b;
   }
   for(int i =0; i<t; i++)
   {
       cout<<sum[i];
       cout<<"\n";
   }
   return 0;
}