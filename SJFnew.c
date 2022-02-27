//Code By Anand Singh - 1900290110012

#include<stdio.h>

int main()
{
    int n,c1=0,c2=0,user[100]={0},system[100]={0};
    int ct[100]={0},wt[100]={0},bt[100]={0},visited[100]={0};
    printf("Enter The No. Of Element : ");
    scanf("%d",&n);
    printf("Press 1 : System\nPress 2 : User\n");
    for(int i=0;i<n;i++)
    {
        int k;
        printf("Enter The Burst Time : ");
        scanf("%d",&k);
        bt[i]=k;
        int choice;
        printf("Enter The Choice : ");
        scanf("%d",&choice);
        if(choice ==1)
        {
            system[c1]=k;
            c1++;
        }
        else
        {
            user[c2]=k;
            c2++;
        }
    }
    int ans=0;
    ct[0]=system[0];
    for(int i=1;i<c1;i++)
    {
        ct[i]=ct[i-1]+system[i];
        ans=ct[i];
        wt[i]=ct[i]-system[i];
    }

    for(int i=0;i<c2;i++)
    { 
        int mn=1000;
        int indx=-1;
        for(int j=0;j<c2;j++)
        {
            if(mn>user[j] && visited[j]==0)
            {
                indx=j;
                mn=user[j];
            }
        }
        visited[indx]=1;
        ans+=mn;
        ct[indx+c1]=ans;
        wt[indx+c1]=ct[indx+c1]-user[indx];
    }
    printf("X\tBT\tCT\tTAT\tWT\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\n",i+1,bt[i],ct[i],ct[i],wt[i]);
    }
}