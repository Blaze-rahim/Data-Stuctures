#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head;
int choice = 0;

void startinsert(){
	int var;
	struct node *ptr = (struct node*) malloc(sizeof(struct node));
	if(ptr=NULL)printf("Overflow!");
 
	else{
		printf("Enter value");
		scanf("%d", &var);
		ptr -> data = var;
		ptr -> next = head;
		head = ptr;
	}
}

void endinsert(){
	struct node *ptr, *temp;
	int var;
	ptr = (struct node*) malloc(sizeof(struct node));
	if(ptr == NULL) printf("OverFlow");
	else{
		printf("Enter value");
		scanf("%d", &var);
		ptr -> data = var;
		if(head == NULL){
			ptr -> next = NULL;
			head = ptr;
		}
		else{
			temp = head;
			while(temp -> next != NULL){
				temp = temp -> next;
			}
			temp -> next = ptr;
			ptr -> next = NULL;
		}
	}
}

void locationinsert(){
	int i, location, num;
	struct node *ptr, *temp;
	ptr = (struct node*)malloc(sizeof(struct node));
	if (ptr == NULL) printf("\n Overflow");

	if(head == NULL){
			ptr -> next = NULL;
			head = ptr;
	}
	else{
		printf("ENter the value : ");
		scanf("%d",&num);
		ptr -> data = num;
		printf("Location you wanna enter : ");
		scanf("%d", &location);
		temp = head;
		for(i = 0; i<location; i++){
			temp = temp -> next;
			if(temp == NULL){
				printf("Index error");
				return;
			}
		}
		ptr -> next = temp -> next;
		temp -> next = ptr;

	}
}
void display(){
	struct node *ptr;
	ptr = head;
	if(ptr== NULL)printf("No nodes are present");
	else{
		printf("\nPrinting data!");
		while(ptr != NULL){
			printf("\n%d at pointer %p", ptr -> data, ptr);
			ptr = ptr -> next;
		}
	}
 }

int main(){
    while(choice != 5)  
    {  
        printf("\n1.Start Insert\n2.End Insert\n3.Location Insert\n4.Display\n5.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:     
                startinsert();  
                break;  
            
            case 2:    
                endinsert();  
                break;  
            
            case 3:    
                locationinsert();  
                break;  

            case 4:     
                display();  
                break;   
              
			case 5:
				printf("Exiting....");  
                break;
			
            default:    
                printf("Please Enter valid choice ");  
            
        }
    }  
    return 0;
}