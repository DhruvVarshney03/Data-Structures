/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 

void TOH(int n, char source, char destination, char aux)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", source, destination);
        return;
    }
    TOH(n-1, source, aux, destination);
    printf("\n Move disk %d from rod %c to rod %c", n, source, destination);
    TOH(n-1, aux, destination, source);
}
 
int main()
{
    int n; 
    printf("Enter no. of disks: ");
    scanf("%d",&n);
    TOH(n, 'A','B','C');  // A, B and C are names of rods
    return 0;
}
