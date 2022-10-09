
#include <stdio.h>
#define len 100
int enqueue();
//const int len;
void show();
int arr[len];
int Rear = - 1;
int Front = - 1;
int main()
{
    while (1)
    {
        enqueue();
        show();
    }
}


int enqueue()
{
    int insert_item;
    if (Rear == len - 1)
        printf("\nOverflow \n");
    else
    {
        if (Front == - 1)

            Front = 0;
        printf("\ninsert in Queue\n : ");
        scanf("%d", &insert_item);
        Rear = Rear + 1;
        arr[Rear] = insert_item;
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
            printf("\n%d ", arr[i]);
        printf("\n");
    }
}
