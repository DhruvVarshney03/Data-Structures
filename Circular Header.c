#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *head,*new,*temp,*tail;
int count=0;

void create() 
{
    new = (node *) malloc(sizeof(node));
    printf("Enter a number : ");
    scanf("%d",&new->data);
    new->next = NULL;
    if(count == 0)
    {
        head = (node *) malloc(sizeof(node));
        count++;
        head->data = count;
        head->next = new;
        tail = head->next;
        tail->next = head;
        printf("Operation is completed\n");
    }
    else
    {
        count++;
        head->data = count;
        tail->next = new;
        tail = new;
        tail->next = head;
        printf("Operation is completed\n");
    }
}
void ins_beg(node *b) 
{
    count++;
    b->next = head->next;
    head->next = b;
    head->data = count;
    printf("Insertion is performed\n");
}

void ins_end(node *e) 
{
    temp = tail;
    temp->next = e;
    tail = e;
    tail->next = head;
    count++;
    head->data = count;
    printf("Insertion is performed\n");
}

void ins_pos(struct node *n) 
{ 
    int pos,i;
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    if((pos > count+1) || (pos <= 0))
    {
        printf("\nInvalid position\n");
    }
    else if(pos == 1)
    {
        ins_beg(n);
    }
    else if(pos == count+1)
    {
        ins_end(n);
    }
    else
    {
        temp = head->next;
        for(i=1;i<pos-1;i++)
        {
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
        count++;
        head->data = count;
        printf("Insertion is performed\n");
    }
}
     

 void insert() 
 {
        int ch;
        printf("1. Insertion at beginning,\n 2. Insertion at end \n 3. Insertion at any position\n");
        printf("Enter the choice : ");
        scanf("%d",&ch);
        new = (node *) malloc(sizeof(node));
        printf("Enter the number : ");
        scanf("%d",&new->data);
        new->next = NULL;
        switch(ch)
        {
            case 1 : ins_beg(new);
                     break;
            case 2 : ins_end(new);
                     break;
            case 3 : ins_pos(new);
                     break;
           default : printf("Invalid!\n");
       }
}

void del_beg() 
{
    count--;
    new = head->next;
    printf("Element to be deleted: %d\n",new->data);
    temp = new->next;
    head->next = temp;
    head->data = count;
    free(new);
}

void del_end() 
{
    temp = head->next;
    while(temp->next != head)
    {
        new = temp;
        temp = temp->next;
    }
    printf("The element to be deleted : %d\n",temp->data);
    tail = new;
    tail->next = head;
    count--;
    head->data = count;
    free(temp);
}

void del_pos() 
{
    int pos,i;
    printf("Enter the position : ");
    scanf("%d",&pos);
    if((pos > count) || (pos <= 0))
    {
        printf("Invalid!\n");
    }
    else if(pos == 1)
    {
        del_beg();
    }
    else if(pos == count)
    {
        del_end();
    }
    else
    {
        temp=head->next;
        for(i=1;i<pos-1;i++)
        {
            temp = temp->next;
        }
        new = temp->next;
        temp->next = new->next;
        count--;
        head->data = count;
        printf("The element to be deleted : %d\n",new->data);
        free(new);
    }
}

void delete() 
{
    if(count == 0)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        int ch;
        printf("1.Delete at start \n 2.Delete at end \n 3.Delete at any position\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : del_beg();
                     break;
            case 2 : del_end();
                     break;
            case 3 : del_pos();
                     break;
           default : printf("Invalid choice\n");
        }
    }
}

void display()  
{
    if(count == 0)
    {
        printf("Linked List is empty\n");
    }
    else
    {
        printf("The number of elements in the list : %d\n",head->data);
        temp = head->next;
        printf("The elements in the list are : \n");
        while(temp != head)
        {
            printf("%d\t",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void search()  
{ 
    int x,f=0,k=1;
    if(count == 0)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        printf("Enter the number to search : ");
        scanf("%d",&x);
        for(temp = head->next;temp != head;temp = temp->next)
        {
            if(temp ->data == x)
            {
                printf("The entered element %d is found at %d position\n",x,k);
                f=1;
                break;
            }
            k++;
        }
        if(f == 0)
        {
            printf("The element %d is not found in the list\n",x);
        }
    }
}


int main() {
    int op;
    while(1)
    {
        printf("1.Create\n 2.Insert \n3.Delete \n4.Display/Print \n 5.Search \n 6.exit\n");
        printf("Enter your option : ");
        scanf("%d",&op);
        switch(op)
        {
            case 1 : create();
                     break;
            case 2 : insert();
                     break;
            case 3 : delete();
                     break;
            case 4 : display();
                     break;
            case 5 : search();
                     break;
            case 6 : printf("End of the program\n");
                     exit(0);
           default : printf("Invalid choice\n");
        }
    }
   
}
