#include<stdio.h>
void swap(int *t1,int *t2)
{
    int temp=*t1;
    *t1=*t2;
    *t2=temp;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}