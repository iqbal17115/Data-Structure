#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head;
void insert()
{
    int a;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n");
    printf("Enter the data for a node:");
    scanf("%d",&a);
    temp->data=a;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        struct node *t;
        t=head;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=temp;
    }
}
void print()
{
    struct node *end;
    end=head;
    while(end!=NULL)
    {
        printf("%d->",end->data);
        end=end->link;
    }
    printf("NULL");
}
int main()
{
    head=NULL;
     int n,i;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        insert();
        print();
    }
}
