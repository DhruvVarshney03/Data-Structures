/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100],lb=0,ub,n,x,i;
    printf("How many elements?");
    scanf("%d",&n);
     
    printf("Enter array elements:\n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);

    printf("\nEnter element to search:");
    scanf("%d",&x);
    
    ub=n-1;   
    int mid=(ub+lb)/2;
    while (lb<=ub)
    {
        if (a[mid] ==x)
        {
            printf("Element found at index %d",mid);
            break;
        }
        else if(a[mid]>x)
        {
            ub=mid-1;
        }
        else if (a[mid]<x)
        {
            lb=mid+1;
        }

        mid=(lb+ub)/2;
    }
}
