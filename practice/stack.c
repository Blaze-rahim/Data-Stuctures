/*Well so have to make dumb stack so we have 3 functions from stack push 
po and display welp rip easy shit*/

#include <stdio.h>
int stack[100],top = -1, max, choise;

void push(){
    int element;
    if(top>max-1){
        printf("Overflow");
    }
    else{
        printf("Enter ya element : ");
        scanf("%d", &element);
        top++;
        stack[top] = element;
    }
}

void pop(){
    if(top==-1){
        printf("Underflow");
    }
    else{
        printf("The element %d popped", stack[top]);
        top--;
    }
}

void display(){
    if(top<0){
        printf("Underflow");
    }
    else{
        printf("Printing elements");
        for(int i = 0; i<=top; i++){
            printf("%d\n ", stack[i]);
        }
    }
}

int main(){
    printf("Enter the number of elements in stack u desire : ");
    scanf("%d", &max);
    while (choise != 4){
        printf("Enter your choise\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3: 
            display();
            break;
        case 4:
            printf("Exiting!!");
            break;

        default:
            printf("Invalid number");
            break;
        }
    }
}