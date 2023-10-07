#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int info;
    struct node* next;
};

struct node* last = NULL;

void insertAtFront()
{
    int data;
    printf("Enter number to be inserted : ");
    scanf("%d", &data);
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));

    if (last == NULL) 
    {
        temp->info = data;
        temp->next = temp;
        last = temp;
    }
    else 
    {
        temp->info = data;
        temp->next = last->next;
        last->next = temp;
    }
}

void insertAtEnd()
{
    int data;
    printf("Enter number to be inserted : ");
    scanf("%d", &data);
    
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));

    if (last == NULL) {
        temp->info = data;
        temp->next = temp;
        last = temp;
    }
    else 
    {
        temp->info = data;
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}


void insertafter()
{
    int data, value;

    struct node *temp, *n;

    printf("Enter number after which you want to enter number: ");
    scanf("%d", &value);
    temp = last->next;
 
    do 
    {

        if (temp->info == value) 
        {
            n = (struct node*)malloc(sizeof(struct node));

            printf("Enter data to be inserted : ");
            scanf("%d", &data);
            n->info = data;
            n->next = temp->next;
            temp->next = n;

            if (temp == last)
                last = n;
            break;
        }
        else
            temp = temp->next;
    } while (temp != last->next);
}


void deletefirst()
{
    struct node* temp;

    if (last == NULL)
        printf("\nList is empty.\n");

    else {
        temp = last->next;
        last->next = temp->next;
        free(temp);
    }
}


void deletelast()
{
    struct node* temp;

    if (last == NULL)
        printf("\nList is empty.\n");
 
    temp = last->next;

    while (temp->next != last)
        temp = temp->next;

    temp->next = last->next;
    last = temp;
}



void deleteAtIndex()
{

    int pos, i = 1;
    struct node *temp, *position;
    temp = last->next;

    if (last == NULL)
        printf("\nList is empty.\n");

    else {

        printf("Enter index : ");
        scanf("%d", &pos);

        while (i <= pos - 1) {
            temp = temp->next;
            i++;
        }

        position = temp->next;
        temp->next = position->next;
 
        free(position);
    }
}

void traverse()
{
    if (last == NULL)
        printf("\nList is empty\n");

    else {
        struct node* temp;
        temp = last->next;
        do {
            printf("\nData = %d", temp->info);
            temp = temp->next;
        } while (temp != last->next);
    }
}

int main()
{
    printf("\n1 To see list\n");
    printf("2 For insertion at starting\n");
    printf("3 For insertion at end\n");
    printf("4 For insertion at any position\n");
    printf("5 For deletion of first element\n");
    printf("6 For deletion of last element\n");
    printf("7 For deletion of element at any position\n");
    printf("8 To exit\n");

    int choice;
    while (1) {
        printf("\nEnter Choice :");
        scanf("%d", &choice);
  
        switch (choice) {
        case 1:
            traverse();
            break;
        case 2:
            insertAtFront();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            insertafter();
            break;
        case 5:
            deletefirst();
            break;
        case 6:
            deletelast();
            break;
        case 7:
            deleteAtIndex();
            break;
        case 8:
            exit(1);
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}