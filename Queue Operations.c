#include <stdio.h>

int main()
{
    int A[10];
    int rear=-1;
    int front=-1;
    int choice=0;
    while (choice < 4)
    {
        printf("Enter choice for Insertion(1), Deletion(2), Display(3), Exit(4): ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1: if (front == 0 && rear == 9)
                    {
                        printf("Queue overflow\n");
                        break;
                    }
                    else
                    {
                        int element;
                        printf("Enter element to insert: ");
                        scanf("%d",&element);
                        front = 0;
                        rear++;
                        A[rear]=element;
                    }
                    break;

            case 2: if (rear == -1 && front == -1)
                    {
                        printf("Queue underflow\n");
                        break;
                    }
                    else
                    {
                        front++;
                    }
                    break;

            case 3: if (rear == -1 && front == -1)
                    {
                        printf("No elements\n");
                        break;
                    }
                    else
                    {
                        for (int i=front; i<=rear; i++)
                        {
                            printf("%d \n",A[i]);
                        }
                    }
                    break;

            case 4: break;
            default: printf("Invalid choice");


        }
    }
    return 0;
}