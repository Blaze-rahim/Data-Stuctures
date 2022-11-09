#include<stdio.h>  
#include<stdlib.h>  
struct node  {  
    struct node *prev;  
    struct node *next;  
    int data;  
};  

struct node *head ;  

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
    int choice = 0;
   
    while(choice != 4){  
        printf("\n1.insertion at end\n2.Deletion at end\n3.Display\n4. Exit");  
       
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        
        switch(choice){  
            case 1:     
                insertion_end();  
                break;  
            
			case 2:
				deletion_end();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting...");
                return 0;
            
            default:    
                printf("Please Enter valid choice ");  
            
        }
    }  
    return 0;
}