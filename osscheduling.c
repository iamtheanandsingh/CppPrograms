#include<stdio.h>
int main(){
    int n,i;
    printf("Enter no. of processes:");
    scanf("%d",&n);
    printf("Enter the burst time for processes: ");
    int BT[n],AT[n],CT[n],TAT[n],WT[n],RS[n];
    for(i=1;i<=n;i++){
        scanf("%d",&BT[i]);        
    }
    printf("enter arrival time of the processes:");
    for(i=1;i<=n;i++){
        scanf("%d",&AT[i]);
    }
    int total=0;
    for(i=1;i<=n;i++){
        total+=BT[i];
        CT[i]=total;
    }
    for(i=1;i<=n;i++){
        TAT[i]=CT[i]-AT[i];
    }
    for(i=1;i<=n;i++){
        WT[i]=TAT[i]-BT[i];
    }
    for(i=1;i<=n;i++){
        RS[i]=CT[i]-BT[i];
    }
    printf("process  BT   AT   WT    TAT\n");
    for(i=1;i<=n;i++){
        printf("%d\t%d\t%d\t%d\t%d\t",i,BT[i],AT[i],WT[i],TAT[i]);
        printf("\n");
    }
    float sum1=0,sum2=0;
    for(i=1;i<=n;i++){
        sum1=sum1+WT[i];
    }
    sum1=sum1/3;
    printf("\nAverage Time:%f",sum1);
    
    for(i=1;i<=n;i++){
        sum2=sum2+TAT[i];
    }
    sum2=sum2/n;
    printf("\nTurn Around Time:%f",sum2);
}