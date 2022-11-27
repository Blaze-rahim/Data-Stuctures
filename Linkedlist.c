#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head;

void startinsert(){
	struct node *ptr;
	int var;

	ptr = (struct node*) malloc(sizeof(struct node *));
 
	if(head == NULL){
		printf("Enter value : ");
		scanf("%D", &var );

		ptr -> data = var;
		head = ptr;
	} 
	else{
		printf("Enter value : ");
		scanf("%D", &var );
		ptr -> next = NULL;
		ptr -> data = var;
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

void afterinsert(){
	int var, num;
	struct node *ptr, *temp;
	ptr = (struct node*) malloc(sizeof(struct node));
	if(ptr==NULL)printf("Overflow!");
 
	else{
		printf("Enter value to insert");
		scanf("%d", &var);

		printf("Which value you wanna insert in?");
		scanf("%d", &num);

		ptr -> data = var;
		if(head == NULL){
			ptr -> next = NULL;
			head = ptr;
		}
		else{
			temp = head;
			while(temp -> data != num){
				temp = temp -> next;
			}
			
			ptr -> next = temp -> next;
			temp -> next = ptr;
		}
	}
}


void beforeinsert(){
	int var, num;
	struct node *ptr, *temp;
	ptr = (struct node*) malloc(sizeof(struct node));
	if(ptr==NULL)printf("Overflow!");
 
	else{
		printf("Enter value to insert");
		scanf("%d", &var);

		printf("Which value you wanna insert in?");
		scanf("%d", &num);

		ptr -> data = var;
		if(head == NULL){
			ptr -> next = NULL;
			head = ptr;
		}
		else{
			temp = head;
			while(temp -> data != num){
				temp = temp -> next;
			}
			
			ptr -> next = temp -> next;
			temp -> next = ptr;
		}
	}
}


void locationinsert(){ //THIS ISNT IN syllabus!
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

void begindelete(){
	struct node *ptr;
	if (head == NULL) printf("Underflow");

	else{
		ptr = head;
		head = ptr -> next;
		free(ptr);
	}

}

void enddelete(){
	struct node *ptr, *temp;
	if (head == NULL) printf("Underflow");

	else if(head -> next == NULL){
		head = NULL;
		free(head);
	}
	else{
		ptr = head;
		while(ptr -> next != NULL){
			temp = ptr;
			ptr = ptr->next;
		}
		temp -> next = NULL;
		free(ptr);
	}
}

void specificnodedelte(){
	struct node *ptr, *temp;
	int num;

	printf("Before which val u wanna delete");
	scanf("%d", &num);

	if (head == NULL) printf("Underflow");
	
	else{
		ptr = head;
		while(ptr -> data != num){
			temp = ptr;
			ptr = ptr->next;
		}
		temp -> next = ptr -> next;
		free(ptr);
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
	int choice = 0;
    while(choice != 6){  
        printf("\n1.Start Insert\n2.End Insert\n3.Afterinsert\n4.Location Insert\n5.Display\n6.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice){  
            case 1:     
                startinsert();  
                break;  
            
            case 2:    
                endinsert();  
                break;  

			case 3:
				afterinsert();
				break;
            
            case 4:    
                locationinsert();  
                break;  

            case 5:     
                display();  
                break;   
              
			case 6:
				printf("Exiting....");  
                break;
			
            default:    
                printf("Please Enter valid choice ");  
            
        }
    }  
    return 0;
}