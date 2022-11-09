#include <stdio.h>
#define max 5
int front = -1, rear = -1, cqueue[max];

void insert(){
    if ((rear == max - 1 && front == 0) || (rear == front - 1)){
        printf("Overflow\n");
    }
    
    else{
        if (front == -1 && rear == -1)
            front = rear = 0;
        
        if (rear == -1 && front != 0)
            rear = 0;
        else rear++; 
        int val;
        printf("Enter : ");
        scanf("%d", &val);
        cqueue[rear] = val;
    }
}
    

void deletion(){
    if (front==-1) printf("Underflow");
    
    else{
        printf("Element %d poped", cqueue[front]);
        if(front == rear) front = rear = -1; 
        
        else{
        if (front == max - 1)
            front = 0;
        else
            front = front + 1;
    
        }
        
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
    int choice;
    while(1){
        printf("\n1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        printf("%d %d\n", front, rear);

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
            printf("Exiting");
            return(0);
        default:
            printf("Wrong choicen");
        }
    }
    
    return 0;
}