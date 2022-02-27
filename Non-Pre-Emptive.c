//Anand Singh 1900290110012

#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of process: ");
    scanf("%d",&n);
    int priority[n],AT[n],BT[n];
    printf("Enter Priority:");
    for(int i=1;i<=n;i++){
        scanf("%d",&priority[i]);
    }
    printf("Enter Arrival time:");
    for(int i=1;i<=n;i++){
        scanf("%d",&AT[i]);
    }
    printf("Enter Burst Time:");
    for(int i=1;i<=n;i++){
        scanf("%d",&BT[i]);
    }
    int visited[n];
    for(int i=1;i<=n;i++){
        visited[i]=0;
    }
    int min=1000;
    int min_ind,totaltat=0,RS=0;
    float sumTAT=0,totalwt=0,totalrs=0;
    for(int i=1;i<=n;i++){
        if(AT[i]<min){
            min=AT[i];
            min_ind=i;
        }
    }
    int CT=0,WT=0;
    visited[min_ind]=1;
    min=BT[min_ind];
    
    CT=CT+min;
    totaltat=CT-AT[min_ind];
    sumTAT+=totaltat;
    WT=totaltat-AT[min_ind];
    totalwt+=WT;
    RS=CT-BT[min_ind];
    totalrs+=RS;
    printf("process\tprio.\tAT\tBT\tCT\tTAT\tWT\tRS\n");
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",min_ind,priority[min_ind],AT[min_ind],BT[min_ind],CT,totaltat,WT,RS);
    int min1=1000;
    for(int j=1;j<n;j++){
        min1=1000;
        for(int i=1;i<=n;i++){
            if(AT[i]<min && visited[i]==0){
                if(priority[i]<min1){
                    min1=priority[i];
                    min_ind=i;
                }        
            }
        }
        min=min+BT[min_ind];
        CT=CT+BT[min_ind];
        totaltat=CT-AT[min_ind];
        sumTAT+=totaltat;
        WT=totaltat-AT[min_ind];
        totalwt+=WT;
        RS=CT-BT[min_ind];
        totalrs+=RS;
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",min_ind,priority[min_ind],AT[min_ind],BT[min_ind],CT,totaltat,WT,RS);
        visited[min_ind]=1;
    }
    printf("Average WT: %f\n",totalwt/n);
    printf("Average TAT: %f\n",sumTAT/n);
    printf("Average RS: %f",totalrs/n);

    return 0;
}
