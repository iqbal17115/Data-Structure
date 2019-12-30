#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *head;
void createList(int n);
void insert(int n, int x);
int finding(int x);
void displayList();

int main()
{
    int n, data,m,x,y;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");
    displayList();

    printf("Enter the value to find his index Number:");
    scanf("%d",&m);
    x=finding(m);
    printf("\n\nIt is in the index number  %d",x);
    printf("\n\nEnter the value of new node:");
    scanf("%d",&y);
    insert(y,x);
    displayList();
    return 0;
}
void insert(int n, int x)
{
    int i;
    struct node *newNode, *temp;
    newNode = (struct node*)malloc(sizeof(struct node));

        newNode->data = n;
        newNode->next = NULL;
        temp = head;
        for(i=2; i<=x; i++)
        {
             temp = temp->next;
        }
        if(temp != NULL)
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
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

int finding(int x)
{
    struct node *currnode=head;
    int currindex=1;
    while(currnode!=NULL&&currnode->data!=x)
    {
        currnode=currnode->next;
        currindex++;
    }
    if(currnode!=NULL)
    {
        return currindex;
    }
    else
        return 0;

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
