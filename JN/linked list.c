#include<stdio.h>
#include<stdlib.h>


void main(){

struct node{
int data;
struct node*link;
};
//    struct node{};

struct node* head =NULL;

head=(struct node*)malloc(sizeof(struct node));
head -> data=10;
head -> link=NULL;
printf("%d\n",head->data);
printf("%d",head->link);

return 0;
}
