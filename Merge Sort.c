#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int ub,int mid,int lb)
{
    int i,j,k;
    int n1=mid-ub+1;
    int n2=lb-mid;
    int leftarray[n1],rightarray[n2];
    for (int i = 0; i < n1; i++)    
    leftarray[i] = a[ub + i];    
    for (int j = 0; j < n2; j++)    
    rightarray[j] = a[mid + 1 + j];    
    i = 0,   
    j = 0;  
    k = ub;   
    while (i < n1 && j < n2)    
    {    
        if(leftarray[i] <= rightarray[j])    
        {    
            a[k] = leftarray[i];    
            i++;    
        }    
        else    
        {    
            a[k] = rightarray[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k] = leftarray[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        a[k] = rightarray[j];    
        j++;    
        k++;    
    }    
}    
void mergeSort(int a[], int ub, int lb)  
{  
    if (ub < lb)   
    {  
        int mid = (ub + lb) / 2;  
        mergeSort(a, ub, mid);  
        mergeSort(a, mid + 1, lb);  
        merge(a, ub, mid, lb);  
    }  
}  
void printArray(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
    printf("\n");  
}  
int main()  
{  
    int a[] = { 45,34,56,21,65,33,47 };  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting array elements are - \n");  
    printArray(a, n);  
    mergeSort(a, 0, n - 1);  
    printf("After sorting array elements are - \n");  
    printArray(a, n);  
    return 0;  
}    


