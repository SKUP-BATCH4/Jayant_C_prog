#include<stdio.h>
#include<stdlib.h>
struct node gluco();

int main()
{
    struct node
    {
        int data;
        struct node *prev;
        struct node *next;
    };

    struct node *head;

    void insertion_begnning();
    void insetion_last();
    void insertion_specified();
    void deletion_beggning();
    void deletion_last();
    void deletion_specified();

    void display();
    void search();
    void exit();

    void main()
    {
        int choice=0;
        while(choice!=9)
        {

            printf("main menu\n");
            printf("choose one option following");
            printf("\n");
            printf("\n1.insertionbegnning\n2.Inert at last\n3. inert at any random loacation\n4.delete from begnning\n5.delete from last\n6.delete the node after the given data\n7.search\n8.show\n9.exit\n");
            printf("enter your choice\n");
            scanf("%d",&choice);

            switch(choice)
            {

            case 1:
                isnsertion_begnning();
                break;
            case 2:
                insertion_last();
                break;

            case 3:
                insertion_specified();
                break;

            case 4:
                deletion_beggning();
                break;

            case 5:
                deletion_last();
                break;
            case 6:
                deletion_specified();
                break;

            case 7:
                search();
                break;

            case 8:
                display();
                break;

            case 9:
                exit();
                break;

            default:
                printf("enter the valid choice............\n");


            }

        }
    }

    void insertion_begnning()
    {
        struct node* ptr;
        int item;
        ptr=(struct node*)malloc(sizeof(struct node));
        if(ptr==NULL)
        {

            printf("\n overflow");
        }
        else
        {
            printf("enter item value:");
            scanf("%d",&item);
            if(head==NULL)
            {
                ptr->next=NULL;
                ptr->prev=NULL;
                ptr->data=item;
                head=ptr;
            }
            printf("\n node inserted\n");
        }
    }


    void insertion_last()
    {
        struct node* ptr,*temp;
        int item;

        ptr=(struct node*)malloc(sizeof(struct node));
        if(ptr==NULL)
        {
            printf("overflow");
        }
        else
        {
            printf("enter item value:");
            scanf("%d",&item);
            ptr->data=item;
            if(head==NULL)
            {
                ptr->next=NULL;
                ptr->prev=NULL;
                head=ptr;
            }
            printf("\n node inserted\n");
        }
    }






















    head=(struct node*)malloc(sizeof(struct node*));
    head->data=10;
    head->p=NULL;
    head->n=n1;

    n1=(struct node*)malloc(sizeof(struct node*));
    n1->data=50;
    n1->p=head;
    n1->n=n2;

    n2=(struct node*)malloc(sizeof(struct node*));
    n2->data=30;
    n2->p=n1;
    n2->n=n3;

    n3=(struct node*)malloc(sizeof(struct node*));
    n3->data=40;
    n3->p=n2;
    n3->n=n4;

    n4=(struct node*)malloc(sizeof(struct node*));
    n4->data=50;
    n4->p=n3;
    n4->n=NULL;

    int count=0;

    ext=head;

    while(ext!=NULL)
    {
        printf("%d\n",ext->p);
        printf("%d\n\n",ext->data);
        printf("%d\n\n",ext->n);
        ext=ext->p;
        ext=ext->n;
        count++;

    }
    printf("%d",count);
}

//struct node gluco(){
//};
void insertion_begnning();
void insetion_last();
void insertion_specified();
void deletion_beggning();
void deletion_last();
void deletion_specified();

void display();
void search();
