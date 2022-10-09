#include<stdio.h>
struct node
{
    int data;
    struct node*link;
};
struct node *head,*newnode,*ptr;
head=NULL;
ptr=NULL;
int n;
printf("no of nodes:");
scanf("%d",&n);
head=struct node *malloc(sizeof(struct node));
printf("enter value to head node:");
scanf("%d",&head->data);
for(int i=0;i<n;i++)
{
    newnode=struct node *malloc(sizeof(struct node)));
    printf("enter data:");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        head=ptr;
        head=newnode;
    }
    else
    {

    }
}
