/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    
    int i,n,x;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d",&x);
        arr[i]=x;
    }
    for (i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }

    int y,pos;
   
    printf("\nenter the element you want to insert: ");
    scanf("%d",&y);
    
    printf("Enter the index: ");
    scanf("%d",&pos);
    
    n++;
    
    for (i=n-1;i>=pos;i--)
        arr[i] = arr[i-1];
    arr[pos] = x;
    
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    
    
    return 0;
    
    
}
