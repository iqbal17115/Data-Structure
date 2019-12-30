#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
}*head;


void createList(int n);
void insertNodeAtMiddle(int data, int position);
void displayList();

int main()
{
    int n, data,m;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");
    displayList();

    printf("\n\nEnter the data to insert at position of the list: ");
    scanf("%d", &data);
    printf("Enter the position to insert a node:");
    scanf("%d", &m);
    insertNodeAtMiddle(data,m);
    printf("\n\n\nData in the list \n");
    displayList();

    return 0;
}

void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

        printf("Enter the data of node 1: ");
        scanf("%d", &data);
        head->data = data;
        head->next = NULL;
        temp = head;

        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data of node %d: ", i);
            scanf("%d", &data);

                newNode->data = data;
                newNode->next = NULL;
                temp->next = newNode;
                temp = temp->next;
    }
}

void insertNodeAtMiddle(int data, int position)
{
    int i;
    struct node *newNode, *temp;
    newNode = (struct node*)malloc(sizeof(struct node));

        newNode->data = data;
        newNode->next = NULL;
        temp = head;

        for(i=2; i<=position; i++)
        {
            temp = temp->next;
        }

        if(temp != NULL)
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

void displayList()
{
    struct node *temp;
        temp = head;
        while(temp != NULL)
        {
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n\n");
}
