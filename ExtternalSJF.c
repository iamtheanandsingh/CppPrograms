#include<stdio.h>
 int main()
{   int n;
    int bt[10],wt[10],tat[10],ct[10],rt[10],at[10],p[10];
    int i,j,total=0,total1=0,total2=0,pos,temp;
    float avg_wt,avg_tat;
    printf("Enter number of process:");
    scanf("%d",&n);
    printf("Enter Burst Time:\n");
    for(i=0;i<n;i++)
    {
    printf("P%d:",i+1);
    scanf("%d",&bt[i]);
    p[i]=i+1;
    }
    printf("Enter the arrival time:\n");
    for(i=0;i<n;i++)
    {
    printf("P%d:",i+1);
    scanf("%d",&at[i]);
    p[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
  
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
  
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
    for(i=0;i<n;i++)
    {
    total+=bt[i];
    ct[i]=total;
    }
    for(i=0;i<n;i++)
    {rt[i]=ct[i]-bt[i];
    }
    
    wt[0]=0;            
    for(i=1;i<n;i++)
    {
     wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
            total2+=wt[i];
    }
    for(i=0;i<n;i++)
    { tat[i]=bt[i]+wt[i];   
        total1+=tat[i];
    }
     printf("Process B_T    A_T     C_T     W_T     TA_T    R_T\n");
    for(i=0;i<n;i++)
    {
       
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t",p[i],bt[i],at[i],ct[i],wt[i],tat[i],rt[i]);
        printf("\n");
    }
    avg_wt=(float)total2/n;      
    avg_tat=(float)total1/n;    
    printf("Average Waiting Time=%f\n",avg_wt);
    printf("Average Turnaround Time=%f\n",avg_tat);
}