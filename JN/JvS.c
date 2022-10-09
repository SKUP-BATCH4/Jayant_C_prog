#include<stdio.h>
#include<stdlib.h>

int linked(struct node);
int main()
{

    struct node
    {
        int data;
        struct node* link;
    };

    struct node *head=NULL,*n1,*ptr1,*ptr2;
    struct node *n2,*n3,*n4;
    struct node *ext;

    head=(struct node*)malloc(sizeof(struct node*));
    head->data=10;
    head->link=NULL;

    printf("enter the data:")
    scanf("%d",&data);
    linked(data);



//    n1=(struct node*)malloc(sizeof(struct node*));
//    n1->data=20;
//    n1->link=NULL;
//    head->link=n1;
//
//    n1=(struct node*)malloc(sizeof(struct node*));
//    n1->data=30;
//    n1->link=NULL;
//    head->link->link=n1;
////    ptr2=n1;
//
//    n1=(struct node*)malloc(sizeof(struct node*));
//    n1->data=40;
//    n1->link=NULL;
//    head->link->link->link=n1;

//    ptr1=n1;
//    ptr2=ptr1;
//    free(ptr1);
//      free(n1);


//    n1=(struct node*)malloc(sizeof(struct node*));
//    n1->data=50;
//    n1->link=NULL;

//    n2=(struct node*)malloc(sizeof(struct node*));
//    n2->data=30;
//    n2->link=n3;
//
//    n3=(struct node*)malloc(sizeof(struct node*));
//    n3->data=40;
//    n3->link=n4;
//
//
//    n4=(struct node*)malloc(sizeof(struct node*));
//    n4->data=50;
//    n4->link=NULL;
//

    int count=0;

    ext=head;

    while(ext!=NULL)
    {
        printf("%d\n",ext->data);
        printf("%d\n\n",ext->link);
        ext=ext->link;
        count++;

    }
}

int linked(struct node *pt1,data)
{
    n1=(struct node*)malloc(sizeof(struct node*));
    n1->data=30;
    n1->link=NULL;
    head->link->link=n1;
}

