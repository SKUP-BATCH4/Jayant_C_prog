#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *link;
};
void main()
{
    struct node* head=NULL;
    struct node *current, *c1,*c2, *next;
    struct node* ptr, *prev, *prev2;


    head=(struct node*)malloc(sizeof(struct node));
    current=(struct node*)malloc(sizeof(struct node));
    c1=(struct node*)malloc(sizeof(struct node));
     c2=(struct node*)malloc(sizeof(struct node));
     next=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->link=current;

    current->data=20;
    current->link=c1;

    c1->data=30;
    c1->link=c2;

    c2->data=40;
    c2->link=NULL;

    //traverse
    int c=0;
 ptr=head;
    while(ptr!=NULL)
    {

        printf("%d ",ptr->data);
        prev=ptr;
        ptr=ptr->link;
        c++;
    }
    printf("\n%d",c);

    printf("\n------------ADD A NODE----------------\n");

    //add a node
    next->data=50;
    next->link=NULL;
    if(ptr==NULL)
    {
        prev->link=next;
    }

    ptr=head;
    while(ptr!=NULL)
    {

        printf("%d ",ptr->data);
        prev2=prev;
        prev=ptr;
        ptr=ptr->link;

    }
    printf("\n------------DELETE A NODE----------------\n");

    //delete a node

    prev2->link=NULL;
    free(next);
    ptr=head;
    while(ptr!=NULL)
    {

        printf("%d ",ptr->data);
//        prev2=prev;
//        prev=ptr;
        ptr=ptr->link;

    }
}

