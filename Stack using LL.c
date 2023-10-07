#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node
{
    int Data;
    struct Node *next;
}*top;
void popStack()
{
    struct Node *temp, *var=top;
    if(var==top)
    {
        top = top->next;
    }
    else
        printf("\nUnderflow. Stack is Empty");
}
void push(int value)
{
    struct Node *temp;
    temp=(struct Node *)malloc(sizeof(struct Node));
    temp->Data=value;
    if (top == NULL)
    {
        top=temp;
        top->next=NULL;
    }
    else
    {
        temp->next=top;
        top=temp;
    }
}
void display()
{
    struct Node *var=top;
    if(var!=NULL)
    {
        printf("\nElements are as:\n");
        while(var!=NULL)
        {
            printf("\t%d\n",var->Data);
            var=var->next;
        }
    printf("\n");
    }
    else
    printf("\nStack is Empty");
}
void main()
{
    int i=0;

    top=NULL;
    printf("\n LINKED STACK");
    printf(" \n1. Push");
    printf(" \n2. Pop ");
    printf(" \n3. Display");
    printf(" \n4. Exit\n");
    while(1)
    {
        printf(" \nChoose Option: ");
        scanf("%d",&i);
        switch(i)
        {
        case 1:
        {
            int value;
            printf("\nEnter an element to push into Stack: ");
            scanf("%d",&value);
            push(value);
            display();
            break;
        }
        case 2: 
        {
            popStack();
            display();
            break;
        }
        case 3: 
        {
            display();
            break;
        }
        case 4: exit(0);
        default: printf("\nwrong choice entered");
        }
    }
}
