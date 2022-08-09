#include<stdio.h>
# define max 5
int stack[max], top = -1, var;
void push(int var){
    if(top == max-1) printf("OVERFLOW!\n");
    else{
        top += 1;
        stack[top] = var;
    }
}

void pop(){
    int popped_var;
    if (top == -1) printf("UNDERFLOW!\n");
    else {
        popped_var = stack[top];
        top -= 1;
        printf("The popped variable is : %d\n", popped_var);
    }
}

void displaY(){
    int i;
    printf("Element in stack are : \n");
    for (i = top ; i>=0; i--) printf("%d\n",stack[i]);
}


void main(){
    push(10);
    push(0);
    push(6);
    push(7);
    push(2);
    push(63);
    displaY();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    
}