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
    struct node* current;
    head=(struct node*)malloc(sizeof(struct node));
    current=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->link=current;

    current->data=20;
    //head->link->link=current;
    current=(struct node*)malloc(sizeof(struct node));
    head->link->link=current;
    current->data=30;
    current->link=NULL;
    printf("%d\n",head->link->link);

    printf("%d %d %d\n",head->data,head->link->data,current->data);
    printf("%d %d",head->link,current->link);
}
