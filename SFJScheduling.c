//Code By Anand Singh - 1900290110012

#include <stdio.h>

void main()
{
    int p,bt[20],wt[20],tat[20],i,at[20],ct[20],temp[20],count=0,sm,end=0,twt=0,ttat=0,j=0,rs[20];
    float awt,atat;
    
    printf("Enter the no. of process: ");
    scanf("%d",&p);
    
    printf("Enter the burst time of the process: ");
    
    for(i=0;i<p;i++)
    {
        scanf("%d",&bt[i]);
        temp[i] = bt[i];
    }
    
    printf("Enter the arrival time of the process: ");
    
    for(i=0;i<p;i++)
    {
    scanf("%d",&at[i]);
    }
    
    bt[9] = 9999;
    
    for(count = 0; count != p; count++)
    {
    sm = 9;
        for(i = 0; i < p; i++)
        {
            if(at[i] <= end && bt[i] < bt[sm] && bt[i] > 0)
            {
            sm = i;
            }
        }
        rs[sm]=end;
        end+= bt[sm];
        ct[sm]=end;
        tat[sm]=ct[sm] - at[sm];
        wt[sm]= tat[sm] - temp[sm];
        twt = twt + wt[sm];
        ttat = ttat + tat[sm];
        bt[sm]=0;
    }

    printf(" P\tBT\tAT\tCT\tWT\tTAT\tRST \n");

    for(i=0;i<p;i++)
    {
        printf(" %d\t%d\t%d\t%d\t%d\t%d\t%d\n", i+1, temp[i],at[i], ct[i],wt[i], tat[i],rs[i]);
    }

    printf("\n\nAverage Waiting Time:%lf\n", (float)twt / (float)p);
    printf("Average Turnaround Time:%lf\n", (float)ttat /(float)p);
}