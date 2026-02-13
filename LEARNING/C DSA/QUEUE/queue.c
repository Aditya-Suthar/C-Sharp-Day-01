// queue

#include <stdio.h>

#define MAX 4

int queue_arr[MAX];
int front = -1;
int rear = -1;
int value;

void insert(int data);
int delete();
void print();

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);

    value = delete();
    value = delete();

    print();
    return 0;
}

void insert(int data)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1)   // first insertion
        front = 0;

    rear = rear + 1;
    queue_arr[rear] = data;
}

int delete()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        return -1;
    }

    int value;
    value = queue_arr[front];
    front = front + 1;
    return value;
}

void print()
{
    int i;

    if (front == -1 || front > rear)
    {
        printf("Queue is Empty\n");
        return;
    }

    for (i = front; i <= rear; i++)
    {
        printf("%d\n", queue_arr[i]);
    }
}
