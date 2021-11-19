#include<bits/stdc++.h>

#define pb push_back

using namespace std;

vector<pair<int,pair<int,int> > >v;
int p[11]={0};
int n,r;
int find_parent(int node)
{
    if(p[node]==node)
    return node;
    int parent=find_parent(p[node]);
    return p[node]=parent;
}
int union_set(int x,int y)
{
    int fpx=find_parent(x);
    int fpy=find_parent(y);
    if(fpx==fpy)
        return 0;
    else
    {
        p[fpy]=fpx;
        return 1;
    }
}
void kruskal()
{
    int count=0,cost=0;
    for(int i=1;i<=n;i++)
    {
        p[i]=i;
    }
    for(int i=0;i<r;i++)
    {
        pair<int,int>p;
        int k=v[i].first;
        p=v[i].second;
        int x=p.first;
        int y=p.second;
        if(union_set(x,y)==1)
        {
            cost+=k;
            count++;
            if(count==n-1)
                break;
        }
    }   
    cout<<cost<<"\n";
}
int main()
{
    int a,b,d;
    cin>>n>>r;
    for(int i=0;i<r;i++)
    {
        cin>>a>>b>>d;
        v.pb(make_pair(d,make_pair(a,b)));
    }
    sort(v.begin(),v.end());
    kruskal();
}