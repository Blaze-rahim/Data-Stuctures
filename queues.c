#include <stdio.h>
#define max 5
int front = -1, rear = -1, queue[max];

void enqueue(){
    int val;
    if(rear == max-1) printf("\nOverflow \n");
    else{
        if(front == -1)
        front = 0;
        printf("Element : ");
        scanf("%d", &val);
        rear += 1;
        queue[rear] = val;
    }
}

void dequeue(){
    if(front == -1 || front > rear) printf("\nUndeflow!\n");
    else{
        printf("\n%d deleted from queue\n", queue[front]);
        front += 1;
    }
}

void display(){
    if (front == -1) printf("\nEmpty queue\n");
    else{
        printf("Queue : \n");
        for(int i = front; i<= rear; i++) printf("%d ", queue[i]);
        }
    }


int main(){
    int ch;
    while (1)
    {
        printf("\n1.Enqueue \n");
        printf("2.Dequeue \n");
        printf("3.Display \n");
        printf("4.Exit\n");
        printf("Enter Choise : ");
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
                display();
                break;
            case 4:
                printf("Exiting.....");
                return 0;
            default:
                printf("Incorrect choice \n");
        } 
    } 
    return 0;
}