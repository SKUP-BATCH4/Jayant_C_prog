
#define SIZE 100
#include <stdio.h>
void enqueue();
void dequeue();
void show();
int inp_arr[SIZE];
int Rear = - 1;
int Front = - 1;
main()
{
    int ch;
    while (1)
    {
        printf("\n1.Enqueue Operation\n");
        printf("\n2.Dequeue Operation\n");
        printf("\n3.Display the Queue\n");
        printf("\n4.Exit\n");
        printf("\nEnter your choice of operations : \n");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(0);
            default:
            printf("\nIncorrect choice \n");
        }
    }
}

void enqueue()
{
    int insert_item;
    if (Rear == SIZE - 1)
       printf("\nOverflow \n");
    else
    {
        if (Front == - 1)

        Front = 0;
        printf("\nElement to be inserted in the Queue\n : ");
        scanf("%d", &insert_item);
        Rear = Rear + 1;
        inp_arr[Rear] = insert_item;
    }
}

void dequeue()
{
    if (Front == - 1 || Front > Rear)
    {
        printf("\nUnderflow \n");
        return ;
    }
    else
    {
        printf("\nElement deleted from the Queue: %d\n", inp_arr[Front]);
        Front = Front + 1;
    }
}

void show()
{

    if (Front == - 1)
        printf("\nEmpty Queue \n");
    else
    {
        printf("\nQueue: \n");
        for (int i = Front; i <= Rear; i++)
            printf("\n%d ", inp_arr[i]);
                    printf("\n");
    }
}
