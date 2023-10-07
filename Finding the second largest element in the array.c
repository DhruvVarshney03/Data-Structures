/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[50],num,x; 
    int i,l,sl;
    
    printf("Please Enter the Number of Elements you want in the array: ");
    scanf("%d", &num);
    
    printf("Please Enter the Value of Elements: ");
    for(x = 0; x < num; x++)
    scanf("%d", &arr[x]);
    
    if (arr[0]>arr[1]){
        l=arr[0];
        sl=arr[1];
    }
    else{
        l=arr[1];
        sl=arr[0];
    }
    for (i=2; i<num;i++){
        if (l<arr[i]){
            sl=l;
            l=arr[i];
        }
        else if(sl<arr[i]){
            sl=arr[i];
        }
    
    printf("Second largest element: %d",sl);
    }
        
    return 0;
}
