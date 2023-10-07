#include<stdio.h>
#define SIZE 10
void insertion_sort(int [],int);
int main()
{
    int a[SIZE],i,n;
    printf("enter how many elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}
void insertion_sort(int a[],int n)
{
    int i,j,item;
    for(i=1;i<n;i++)
    {
        item=a[i];
        for(j=i-1;j>=0&&a[j]>item;j--)
            a[j+1]=a[j];
        a[j+1]=item;    
    }
}