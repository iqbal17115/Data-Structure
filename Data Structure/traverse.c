#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *head;
void createList(int n);
int traverse();
void displayList();

int main()
{

      int n, data,m,x;

    printf("Enter the number of nodes: ");

    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");

    displayList();


    x=traverse();
    printf("\n\n\nAfter Traversing, Number of Node is %d:",x);
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

int traverse()
{
    int num=0;
    struct node *currnode;
    currnode=head;
    while(currnode!=NULL)
    {
        currnode=currnode->next;
        num++;
    }
    return num;
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
