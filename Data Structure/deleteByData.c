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
        printf("%d..->",end->data);
        end=end->link;
    }
    printf("NULL");
}
void deletingnode(int b)
{
    int num=1;
    struct node *prevnode=NULL;
    struct node *currnode=head;
    while(currnode!=NULL && currnode->data!=b)
    {
        prevnode=currnode;
        currnode=currnode->link;
        num++;
    }
    if(currnode!=NULL)
    {
       prevnode->link=currnode->link;
       free(currnode);
    }
    else
    {
         head=currnode->link;
    }

}
int main()
{
    head=NULL;
     int n,i,b;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        insert();
        print();
    }
    printf("\n");
    printf("Enter data for delete node:");
    scanf("%d",&b);
    deletingnode(b);
    print();
}
