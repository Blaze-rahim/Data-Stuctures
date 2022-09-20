#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head;
struct node *temp;

void begininsert(){
    struct node *ptr;
    int item;
    ptr = (struct node*) malloc (sizeof(struct node));
    if(ptr == NULL) printf("Overflow");

    else{
        printf("Enter the value : ");
        scanf("%d", &item);

        if(head == NULL){
            ptr -> next = NULL;
            ptr -> prev = NULL;
            ptr -> data = item;
            head = ptr;
        }
        else{
            ptr -> next = head;
            ptr -> prev = NULL;
            ptr -> data = item;
            head -> prev = ptr;
            head = ptr; 
        }
    }
}

void display()  
{  
    struct node *ptr;  
    printf("Printing values...\n");  
    ptr = head;  
    while(ptr != NULL){  
        printf("%d\n",ptr->data);  
        ptr=ptr->next;  
    }  
} 

void main(){
       begininsert();
       begininsert();
       begininsert();
       begininsert();
       display();
}