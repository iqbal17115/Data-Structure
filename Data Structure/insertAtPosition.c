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
    struct node *temp;
    int m;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n");
    printf("Enter the data for a node:");
    scanf("%d",&m);
    temp->data=m;
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
  struct node *temp1;
  temp1=head;
  while(temp1!=NULL)
  {
      printf("%d...->",temp1->data);
      temp1=temp1->link;
  }
  printf("NULL");
}
void adnodeatmiddle(int x,int y)
{
    int i;
    struct node *newnode,*temp3;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newnode->data=x;
        newnode->link=NULL;
        temp3=head;
        for(i=2;i<=y-1;i++)
        {
            temp3=temp3->link;
            if(temp3==NULL)
                break;
        }
        if(temp3!=NULL)
        {
            newnode->link=temp3->link;
            temp3->link=newnode;
        }
        else
        {
            printf("Unable to insert data in this position.");
        }
    }

}
int main()
{
    head=NULL;
    int n,i,a,p;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     insert();
     print();
    }
    printf("Enter the data for a new node:");
    scanf("%d",&a);
    printf("Enter the position for the node:");
    scanf("%d",&p);
    adnodeatmiddle(a,p);
    print();
}
