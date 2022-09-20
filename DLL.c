#include<stdio.h>  
#include<stdlib.h>  
struct node  {  
    struct node *prev;  
    struct node *next;  
    int data;  
};  

struct node *head;  

void insertion_begin()  {  
   struct node *ptr;   
   int val;  
   ptr = (struct node *)malloc(sizeof(struct node));  

   if(ptr == NULL) printf("\nOVERFLOW");  

   else{  
        printf("\nEnter value");  
        scanf("%d",&val);  
        
        if(head==NULL){  
            ptr -> next = NULL;  
            ptr->prev=NULL;  
            ptr -> data = val;  
            head=ptr;  
        }  

        else{  
            ptr -> data = val;  
            ptr -> prev = NULL;  
            ptr -> next = head;  
            head -> prev = ptr;  
            head = ptr;  
        }  
    }     
}  

void insertion_end(){  
   struct node *ptr,*temp;  
   int val;  

   ptr = (struct node *) malloc(sizeof(struct node));  
   if(ptr == NULL) printf("\nOVERFLOW");  

   else{  
        printf("\nEnter value");  
        scanf("%d",&val);  
        ptr -> data = val; 

        if(head == NULL){  
            ptr -> next = NULL;  
            ptr -> prev = NULL;  
            head = ptr;  
        }  
        else{  
            temp = head;  
            while(temp -> next != NULL) temp = temp -> next;  
            temp -> next = ptr;  
            ptr -> prev = temp;  
            ptr -> next = NULL;  
        }                  
    }  
}

void after_insertion(){  
    struct node *ptr, *temp;  
    int val;

    printf("\n Enter the data after which the node is to be Inserted : ");  
    scanf("%d", &val); 

    ptr = head;

    while(temp -> data != val)temp = temp -> next;  
    if(temp -> next == NULL) printf("\n NOT Found");  
    else{   
        ptr -> data = val;
        ptr -> prev = temp;
        temp -> next -> prev = ptr;
        temp -> next = ptr;  
        free(temp);  
         
    }     
}  

void before_insertion(){  
    struct node *ptr, *temp;  
    int val;

    printf("\n Enter the data befores which the node is to be Inserted : ");  
    scanf("%d", &val); 

    ptr = head;

    while(temp -> data != val)temp = temp -> next;  
    if(temp -> next == NULL) printf("\n NOT Found");  
    else{   
        ptr -> data = val;
        ptr -> next = temp;
        temp -> prev -> next = ptr;
        temp -> prev = ptr;  
        free(temp);  
         
    }     
}  


void deletion_begin(){  
    struct node *ptr;  
    if(ptr == NULL) printf("\nUnderflow");  

    else if(head -> next == NULL){  
        head = NULL;   
        free(head);  
    }  
    else{  
        ptr = head;  
        head = head -> next;  
        head -> prev = NULL;  
        free(ptr);  
    }  
  
}  
void deletion_end()  
{  
    struct node *ptr;  
    if(ptr == NULL) printf("\nUnderflow");  
 
    else if(head->next == NULL){  
        head = NULL;   
        free(head);   
    }  
    else{  
        ptr = head;   
        if(ptr->next != NULL){  
            ptr = ptr -> next;   
        }  
        ptr -> prev -> next = NULL;   
        free(ptr);  
 
    }  
}  

void after_deletion(){  
    struct node *ptr, *temp;  
    int val;

    printf("\n Enter the data after which the node is to be deleted : ");  
    scanf("%d", &val); 

    ptr = head;

    while(ptr -> data != val)ptr = ptr -> next;  
    if(ptr -> next == NULL) printf("\n NOT Found!");  
  
    else if(ptr -> next -> next == NULL){  
        ptr ->next = NULL;  
    }  
    else{   
        temp = ptr -> next;  
        ptr -> next = temp -> next;  
        temp -> next -> prev = ptr;  
        free(temp);  
         
    }     
}  

void before_deletion(){  
    struct node *ptr, *temp;  
    int val;

    printf("\n Enter the data before which the node is to be deleted : ");  
    scanf("%d", &val); 

    ptr = head;

    while(ptr -> data != val)ptr = ptr -> next;  
    if(ptr -> prev == NULL) printf("\n No node before it");  

    else if(ptr -> prev -> prev == NULL){  
        ptr -> prev = NULL;  
    }  
    else{   
        temp = ptr -> prev;  
        ptr -> prev = temp -> prev;  
        temp -> prev -> next = ptr;  
        free(temp);    
    }     
}  

void display()  {  
    struct node *ptr;  
    printf("\n printing values...\n");  
    ptr = head;  

    while(ptr != NULL){  
        printf("%d\n",ptr->data);  
        ptr = ptr -> next;  
    }  
}   

int main(){
    //DO WHAT U WANT :)
    return 0;
}