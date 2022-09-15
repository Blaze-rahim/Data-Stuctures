#include <stdio.h>
#define max 5
int front = -1, rear = -1, cqueue[max];

void insert(){
    int val;
    if ((rear == max - 1 && front == 0) || (rear == front - 1))
        printf("Overflow\n");
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
        printf("Underflow\n");
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
        printf("\n1.Insert\n");
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

// Output

// PS C:\Users\AbdulRahim\Desktop\Data-Stuctures> gcc .\circular_queues.c   
// PS C:\Users\AbdulRahim\Desktop\Data-Stuctures> .\a.exe
// 1.Insert
// 2.Delete
// 3.Display
// 4.Quit
// Enter your choice : 1
// 1.Insert
// 2.Delete
// 3.Display
// 4.Quit
// Enter your choice : 1
// Enter : 12
// 1.Insert
// 2.Delete
// 3.Display
// 4.Quit
// Enter your choice : 1
// Enter : 15
// 1.Insert
// 2.Delete
// 3.Display
// 4.Quit
// Enter your choice : 1
// Enter : 1
// 1.Insert
// 2.Delete
// 3.Display
// 4.Quit
// Enter your choice : 1
// Enter : 54
// 1.Insert
// 2.Delete
// 3.Display
// 4.Quit
// Enter your choice : 1
// Overflow
// 1.Insert
// 2.Delete
// 3.Display
// 4.Quit
// Enter your choice : 3
// Elements :
// 0 12 15 1 54 3 
// 1.Insert
// 2.Delete
// 3.Display
// 4.Quit
// Enter your choice : 2
// Element deleted is : 0
// 1.Insert
// 2.Delete
// 3.Display
// 4.Quit
// Enter your choice : 2
// Element deleted is : 12
// 1.Insert
// 2.Delete
// 3.Display
// 4.Quit
// Enter your choice : 2
// Element deleted is : 15
// 1.Insert
// 2.Delete
// 3.Display
// 4.Quit
// Enter your choice : 2
// Element deleted is : 1
// 1.Insert
// 2.Delete
// 3.Display
// 4.Quit
// Enter your choice : 2
// Element deleted is : 54
// 1.Insert
// 2.Delete
// 3.Display
// 4.Quit
// Enter your choice : 4