#include<stdio.h>
#include<stdlib.h>
void beginsert ();
void display();

struct node
{
    int data;
    struct node *next;
};

struct node *head;


void main()
{
    while(1){

    beginsert();
    display();
    }
}


void beginsert()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nover\n");
    }
    else
    {
        printf("\nEnter the data:\n");
        scanf("%d",&item);
        ptr -> data = item;
        if(head == NULL)
        {
            head = ptr;
            ptr -> next = head;
        }
        else
        {
            temp = head;
            while(temp->next != head)
                temp = temp->next;
            ptr->next = head;
            temp -> next = ptr;
            head = ptr;
        }
        printf("\nnode inserted\n");
    }

}

void display()
{
    struct node *ptr;
    ptr=head;
    if(head == NULL)
    {
        printf("\nno printing statements:\n");
    }
    else
    {
        printf("\nthe node values is: \n");

        while(ptr -> next != head)
        {

            printf("\n%d\n", ptr -> data);
            ptr = ptr -> next;
        }
        printf("\n%d\n", ptr -> data);
    }

}
