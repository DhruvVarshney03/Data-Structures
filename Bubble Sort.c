/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){

    int arr[50], num, x, y, temp;    
    
    printf("Please Enter the Number of Elements you want in the array: ");
    scanf("%d", &num); 
    
    printf("Please Enter the Value of Elements: ");
    for(x = 0; x < num; x++)
    scanf("%d", &arr[x]);

    for(x = 0; x < num - 1; x++){       
        for(y = 0; y < num - x - 1; y++){          
            if(arr[y] > arr[y + 1]){               
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }
    }
    printf("Array after implementing bubble sort: ");
    for(x = 0; x < num; x++){
        printf("%d  ", arr[x]);

    }

    return 0;

}


