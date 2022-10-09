#include<stdio.h>
#include<stdlib.h>
int main(){
struct node{
int data;
struct node* link;
};

struct node* head=NULL,*n1;

struct node* ext;

head=(struct node*)malloc(sizeof(struct node));
head -> data=10;
head ->link=NULL;

n1=(struct node*)malloc(sizeof(struct node));
n1 -> data=20;
n1 ->link=NULL;

head->link=n1;
n1=(struct node*)malloc(sizeof(struct node));
n1 -> data=30;
n1 ->link=NULL;

head->link->link=n1;
n1=(struct node*)malloc(sizeof(struct node));
n1 -> data=40;
n1 ->link=NULL;
//n1=(struct node*)malloc(sizeof(struct node));
//n1 -> data=50;
//n1 ->link=NULL;
//n1=(struct node*)malloc(sizeof(struct node));
//n1 -> data=60;
//n1 ->link=NULL;

int count=0;

ext=head;

while(ext!=NULL){
printf("%d\n",ext->data);
printf("%d\n\n",*ext->link);
ext=ext->link;
count++;
}

printf("%d",count);
}
