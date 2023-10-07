/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char Arr[100];
    int length=0;
    printf ("Enter string: ");
    scanf("%s",Arr);

    for (int i=0;Arr[i] != '\0';i++)
    {
        length++;
    }
    printf ("Length of string is: %d",length);
    
    return 0;
}

