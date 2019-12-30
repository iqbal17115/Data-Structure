#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
int i=0;
struct node *root;
void insert()
{
    int value;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data for the node %d:",++i);
    scanf("%d",&value);
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL)
    {
        root=newnode;
    }
    else
    {
        struct node *temp=root;
        while(1)
        {
        if(newnode->data < temp->data)
        {
            if(temp->left==NULL)
            {
                temp->left=newnode;
                break;
            }
            else
            {
                temp=temp->left;
            }
        }
        else
        {
            if(temp->right==NULL)
            {
                temp->right=newnode;
                break;
            }
            else
            {
                temp=temp->right;
            }
        }
        }
    }
}
void preorder(struct node *tree)
{
    if(tree==NULL)return;
    printf("%d    ",tree->data);
    preorder(tree->left);
    preorder(tree->right);

}
void postorder(struct node *t)
{
    if(t==NULL)return;
    postorder(t->left);
    postorder(t->right);
    printf("%d    ",t->data);

}
void inorder(struct node *f)
{
    if(f==NULL)return;
    inorder(f->left);
    printf("%d    ",f->data);
    inorder(f->right);
}
int main()
{
    root=NULL;
    int a,n,i,x;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        insert();
    }
    printf("\n\nPre-Order:");
    preorder(root);
    printf("\n\nPost-Order:");
    postorder(root);
    printf("\n\nIn-Order:");
    inorder(root);
}
