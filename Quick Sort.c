#include<stdio.h>
#define SIZE 10
int partition(int [],int,int);
void quick_sort(int [],int,int);
int main()
{
    int a[SIZE],n,i;
    printf("enter how many elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    quick_sort(a,0,n-1);
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
int partition(int a[],int lb,int ub)
{
    int down,up,t,pivot;
    down=lb;
    up=ub;
    pivot=a[lb];
    while(down<up)
    {
        while(a[down]<=pivot&&down<up)
            down++;
        while(a[up]>pivot)
            up--;
        if(down<up)
        {
            t=a[down];
            a[down]=a[up];
            a[up]=t;
        }
    }
    a[lb]=a[up];
    a[up]=pivot;
    return(up);
}
void quick_sort(int a[],int lb,int ub)
{
    int mid;
    if(lb>=ub)
        return;
    mid=partition(a,lb,ub);
    quick_sort(a,lb,mid-1);
    quick_sort(a,mid+1,ub);
}