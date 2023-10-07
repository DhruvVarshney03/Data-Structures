#include<stdio.h>
#define SIZE 10
void shell_sort(int[],int);
void main()
{
    int a[SIZE],i,n;
    printf("enter how many elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    shell_sort(a,n);
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}
void shell_sort(int a[],int n)
{
    int i,j,item,span;
    span=n/2;
    while(span>=1)
    {
        for(i=span;i<n;i++)
        {
            item=a[i];
            for(j=i-span;j>=0&&a[j]>item;j-=span)
                a[j+span]=a[j];
            a[j+span]=item;    
        }
        span=span/2;
    }
}