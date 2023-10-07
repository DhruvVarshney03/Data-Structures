#include<stdio.h>
#define SIZE 10
void selection_sort(int[],int);
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
    selection_sort(a,n);
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0; 
}
void selection_sort(int a[],int n)
{
    int minpos;
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        minpos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[minpos]>a[j])
                minpos=j;
        }
        if(minpos!=i)
        {
            t=a[i];
            a[i]=a[minpos];
            a[minpos]=t;
        }
    }
}
