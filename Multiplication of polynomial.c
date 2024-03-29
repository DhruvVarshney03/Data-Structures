#include <stdio.h> 
#include <stdlib.h> 

struct node {
    float coeff; 
    int exponent; 
    struct node* link;
};

struct node* insert(struct node* head, float co, int ex) 
{
    struct node* temp; 
    struct node* newP = malloc(sizeof(struct node)); 
    newP->coeff = co; 
    newP->exponent = ex; 
    newP->link = NULL;

     
    if(head == NULL || ex > head->exponent) 
    {
        newP->link = head; 
        head = newP; 
    }
    else 
    { 
        temp = head; 
        while(temp->link != NULL && temp->link->exponent >= ex) 
            temp = temp->link; 
        newP->link = temp->link; 
        temp->link = newP; 
    }
    return head; 
}

struct node* create(struct node* head)
{ 
    int n, i; 
    float coeff; 
    int exponent; 

    printf("Please enter the number of terms for polynomial: "); 
    scanf("%d", &n); 

    for(i=0; i<n; i++) 
    {
        printf("Enter the coefficient for term  %d: ", i+1);
        scanf("%f", &coeff); 

        printf("Enter the exponent for term %d: ", i+1); 
        scanf("%d", &exponent); 

        head = insert(head, coeff, exponent); 
    }
    return head; 
}

void print(struct node* head)
{ 
    if(head == NULL) 
        printf("Invalid!"); 
    else {
        struct node* temp = head; 
        while(temp != NULL)
        {
            printf("(%0.1fx^%d)", temp->coeff, temp->exponent); 
            temp = temp->link; 
            if(temp!=NULL) 
                printf(" + "); 
            else printf("\n");
        }
    }
}

void polyMult(struct node* head1, struct node* head2) 
{
    struct node* ptr1 = head1; 
    struct node* ptr2 = head2; 
    struct node* head3 = NULL; 

   
    if(head1 == NULL || head2 == NULL) 
    {
        printf("Zero polynomial\n"); 
        return;
    } 
    
    
    while(ptr1 != NULL)
    {
        while(ptr2 != NULL)
        {
            head3 = insert(head3, ptr1->coeff * 
            ptr2->coeff, ptr1->exponent + ptr2->exponent); 
            ptr2 = ptr2->link; 
        }
        ptr1 = ptr1->link; 
        ptr2 = head2; 
    } 
    print(head3); 
}

int main()
{ 
    struct node* head1 = NULL; 
    struct node* head2 = NULL; 
    printf("Enter the 1st polynomial\n "); 
    head1 = create(head1); 
    printf("Enter the 2nd polynomial\n "); 
    head2 = create(head2);

    polyMult(head1, head2); 
    return 0;
}

