#include<stdio.h>
#include<stdlib.h>
struct node{

    int info;
    struct node *point;

};
struct node *head;
void Insert(int x){

    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->info=x;
    temp->point=head;
    head=temp;

}
void print()
{

    struct node*temp=head;
    printf("\nList is:");
    while(temp!=NULL)
    {


        printf("%d->",temp->info);
        temp=temp->point;
    }
    printf("NULL\n");
}
int main()
{
    head=NULL;
    int x,i,n;
    printf("How many number of Nodes?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\nEnter the Information value of the node :\n");
    scanf("%d",&x);
    Insert(x);
    print();
    }

return 0;
}
