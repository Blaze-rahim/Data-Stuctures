#include <stdio.h>
#define max 5
int front = -1, rear = -1, cqueue[max];

void insert(){
    int val;
    if ((rear == max - 1 && front == 0) || (rear == front - 1))
        printf("Overflow");
    if (front == -1 && rear == -1)
        front = rear = 0;
    else if (rear == -1 && front != 0)
        rear = 0;
    else{
        printf("Enter : ");
        scanf("%d", &val);
        rear += 1;
        cqueue[rear] = val;
    }
}

void deletion(){
    if (front == -1){
        printf("Underflow");
        return;
    }
    printf("Element deleted is : %d\n", cqueue[front]);
    if (front == rear)
        front = rear = -1;
    else{
        if (front == max - 1)
            front = 0;
        else
            front = front + 1;
    }
}


void display(){
    int front_pos = front, rear_pos = rear;
    if (front == -1){
        printf("Queue is empty\n");
        return;
    }
    printf("Elements :\n");
    if (front_pos <= rear_pos){
        while (front_pos <= rear_pos){
            printf("%d ", cqueue[front_pos]);
            front_pos++;
        }
    }

    else{
        while (front_pos <= max - 1){
            printf("%d ", cqueue[front_pos]);
                front_pos++;
        }
        front_pos = 0;
        while (front_pos <= rear_pos){
            printf("%d ", cqueue[front_pos]);
            front_pos++;
        }
    }
}


int main(){
    int choice, item;
    do{
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice){
        case 1:
            insert();
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("Wrong choicen");
        }
    }while (choice != 4);
    
    return 0;
}