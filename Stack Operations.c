/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define Size 4 
 
int top=-1, array[Size];
void Push();
void Pop();
void show();
 
int main()
{
	int choice;
	
	while(1)	
	{
        printf("Enter choice for Insertion(1), Deletion(2), Display(3), Exit(4): ");
        scanf("%d",&choice);
		
		
		switch(choice)
		{
			case 1: Push();
					break;
			case 2: Pop();
					break;
			case 3: show();
					break;
			case 4: exit(0);
			
			default: printf("\nInvalid choice!!");
		}
	}
}
 
void Push()
{
	int x;
	
	if(top==Size-1)
	{
		printf("Overflow!!");
	}
	else
	{
		printf("Enter element to be inserted to the stack:");
		scanf("%d",&x);
		top=top+1;
		array[top]=x;
	}
}
 
void Pop()
{
	if(top==-1)
	{
		printf("Underflow!!");
	}
	else
	{
		printf("Popped element:  %d\n",array[top]);
		top=top-1;
	}
}
 
void show()
{
	
	
	if(top==-1)
	{
		printf("Underflow!!");
	}
	else
	{
		printf("Elements present in the stack: \n");
		for(int i=top;i>=0;--i)
			printf("%d\n",array[i]);
	}
}

