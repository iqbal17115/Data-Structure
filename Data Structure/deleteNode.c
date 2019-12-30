#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
}*head;


void createList(int n);
int find(int x);
void deletingnode(int x);
void displayList();

int main()
{
    int n,x,m;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");
    displayList();
    printf("Enter the data to delete: ");
    scanf("%d", &x);
    m=find(x);
    deletingnode(m);
    printf("After deleting the data List is:\n",m);
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

int find(int x)
{
    struct node * crrNode=head;
    int index=1;
    while(crrNode!=NULL && crrNode->data!=x)
    {
        crrNode=crrNode->next;
        index++;
    }
    if(crrNode!=NULL)
    {
        return index;
    }
    else
        return 0;
}
void deletingnode(int x)
{
    int i;
    struct node *prevnode,*currnode;
    prevnode=NULL;
    currnode=head;

    for(i=0;i<x;i++)
    {
        prevnode=currnode;
        currnode=currnode->next;
    }
    if(currnode!=NULL)
    {
        if(prevnode!=NULL)
        {
            prevnode->next=currnode->next;
            free(currnode);
        }
        else
        {
            head=currnode->next;
            free(currnode);
        }
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
