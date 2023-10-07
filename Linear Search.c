/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
  
int main()
{
    int a[20],i,x,n;
    printf("How many elements?");
    scanf("%d",&n);
     
    printf("Enter array elements:\n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("\nEnter element to search:");
    scanf("%d",&x);
     
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
     
    if(i<n)
        printf("Element found at index %d",i);
    else
        printf("Element not found");
  
    return 0;
}