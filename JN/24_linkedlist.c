#include<stdio.h>
#include<stdlib.h>
int main(){
struct node{
int data;
struct node* link;
};

struct node* head=NULL;
struct node* last=NULL;
struct node* ext;

head=(struct node*)malloc(sizeof(struct node));
last=(struct node*)malloc(sizeof(struct node));
ext=(struct node*)malloc(sizeof(struct node));  //referring as third node

head -> data=10;   //first node
head ->link=last;

last -> data=50;      //second node
last ->link=ext;

ext -> data=90;    //third node
ext ->link=NULL;

printf("%d\n",head->data);         //first node
printf("%d\n\n",head->link);

printf("%d\n",last->data);          //second node
printf("%d\n\n",last->link);

printf("%d\n",ext->data);
printf("%d\n",ext->link);         //third node
}
