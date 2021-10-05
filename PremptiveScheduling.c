//Anand Singh 1900290110012

#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of Process: ");
    scanf("%d", &n);
    printf("Enter Priority: \n");
    int priority[n + 1];
    for (int i = 1; i <=n; i++)
    {
        scanf("%d", &priority[i]);
    }
    printf("Enter Arrival Time: \n");
    int AT[n + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &AT[i]);
    }
    printf("Enter Burst Time: \n");
    int BT[n + 1];
    int left[n + 1];
    for (int i = 1; i <=n ; i++)
    {
        scanf("%d", &BT[i]);
        left[i] = BT[i];
    }

    int visited[n + 1];
    int lag[n+1];
    for (int i = 1; i <= n; i++)
    {
        visited[i] = 0;
        lag[i]=0;
    }
    int min_prio = 1000;
    int min_ind = 1000;
    int new = 1000;
    int min = 1000;
    for (int i = 1; i <= n; i++)
    {
        if (AT[i] <= min)
        {
            min = AT[i];
            if (priority[i] < min_prio)
            {
                min_prio = priority[i];
                min_ind = i;
            }
        }
    }
    min=AT[min_ind]+BT[min_ind];
    visited[min_ind]=1;
    int flag1 = 0, flag2 = 0;
    int previousmin=min, temppreviousmin;
    int previousind=min_ind, temppreviousind;
    int f=n;
    lag[min_ind]=min;
  
    for(int i=1;i<f;i++){
        previousind=min_ind;
        previousmin=min;
        for(int k=1;k<=n;k++){
            if(AT[k]<=min && visited[k]==0){
                if(priority[k]<min_prio){ 
                min_prio=priority[k]; 
                min_ind=k;    
                flag1=1;
                flag2=1;
                }
            }
        }
        if(flag1==1 && flag2==1){
        min=(min-BT[previousind])+(AT[min_ind]-AT[previousind])+BT[min_ind];
        BT[previousind]-=(AT[min_ind]-AT[previousind]);
        visited[min_ind]=1;
        visited[previousind]=0;
        f++;
        lag[min_ind]=min;
        }
        if(flag1==0){
            previousmin=min;
            previousind=min_ind;
            int lamp=1000;
            for(int k=1;k<=n;k++){
                
                if(AT[k]<min && visited[k]==0 && priority[k]>min_prio){
                    if(priority[k]<lamp){
                        lamp=priority[k];
                        min_ind=k;
                        flag2=1;
                    }
                }
            }
            if(flag2==1){
            min_prio=lamp;
            min=min+BT[min_ind];
            lag[min_ind]=min;
            visited[min_ind]=1;
            }
        }
        if(flag2==0){
            previousmin=min;
            previousind=min_ind; 
            for(int k=1;k<=n;k++){
                if(AT[k]==min && visited[k]==0){ 
                    min_prio=priority[k];
                    min_ind=k;
                    
                }
            }
            
            min=min+BT[min_ind];
            visited[min_ind]=1;
            lag[min_ind]=min;
          
        }
        flag1=0;
        flag2=0;
    }
    int TAT[n+1];
    int WT[n+1];
    int RS[n+1];
    for(int i=1;i<=n;i++){
        TAT[i]=lag[i]-AT[i];
        WT[i]=TAT[i]-left[i];
        RS[i]=lag[i]-left[i];
    }
    printf("Process\tPrio\tAT\tBT\tCT\tTAT\tWT\tRS\n");
    for(int i=1;i<=n;i++){
        
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",i,priority[i],AT[i],left[i],lag[i],TAT[i],WT[i],RS[i]);
    }
    float sum1=0,sum2=0;
    for(int i=1;i<=n;i++){
        sum1+=TAT[i];
        sum2+=WT[i];
    }
    printf("Avg TAT: %f\n",sum1/n);
    printf("Avg WT: %f\n",sum2/n);
}
