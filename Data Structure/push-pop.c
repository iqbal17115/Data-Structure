#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void push(int n);
void pop(int n);
void display();
int main()
{
    int n,x,y,i;
    printf("Enter the number of node:");
    scanf("%d",&n);
    push(n);
    display();
    for(i=0;i<n;i++)
    {
        printf("\nEnter the data of the top of the stack:");
        scanf("%d",&x);
        pop(x);
        printf("After popping the top of the stack\n ");
        display();
    }
    printf("and the stack is empty");
   // printf("\nEnter the data of the top of the stack:");
    //scanf("%d",&y);
    //pop(y);
    //printf("After popping the top of the stack list is:\n ");
    //display();
}
void push(int n)
{
    struct node *newnode,*temp;
    head=(struct node*)malloc(sizeof(struct node));

    int data,i;
    printf("\nEnter the value of Node 1:");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    printf("\nNow top of the stack is %d.",head->data);
    temp=head;
    for(i=2;i<=n;i++)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the value of Node %d:",i);
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
        printf("\nNow top of the stack is %d.\n",newnode->data);
        temp=temp->next;
    }
}
void display()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
void pop(int x)
{
    struct node *prev=NULL;
    struct node *curr=head;
    while (curr!=NULL && curr->data!=x)
    {
        prev=curr;
        curr=curr->next;
    }
    if(curr!=NULL)
    {
        if(prev!=NULL)
        {
            prev->next=curr->next;
            free(curr);
        }
        else
        {
            head=curr->next;
            free(curr);
        }
    }
}
