#include <stdio.h>   
int stack[100],i,j,choice=0,n,top=-1;  
  
void push ()  
{  
    int val;      
    if (top == n-1 )   
    printf("\n Overflow\n");   
    else   
    {  
        printf("Enter the value?");  
        scanf("%d",&val);         
        top = top +1;   
        stack[top] = val;   
    }   
}   
  
void pop ()   
{   
    if(top == -1)   
    printf("Underflow");  
    else  
    top = top -1;   
}   

void show()  
{  
    printf("\nThe elements are : \n");
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty");  
    }  
}  

void main ()  
{  
      
    printf("Enter the number of elements in the stack ");   
    scanf("%d",&n);  
  
    while(choice != 4)  
    {  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                show();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        }
    }  
} 
/*
output:
Enter the number of elements in the stack 3
1.Push
2.Pop
3.Show
4.Exit
 Enter your choice 
1
Enter the value?2
1.Push
2.Pop
3.Show
4.Exit
 Enter your choice 
1
Enter the value?3
1.Push
2.Pop
3.Show
4.Exit
 Enter your choice 
1
Enter the value?3
1.Push
2.Pop
3.Show
4.Exit
 Enter your choice 
1
Overflow

1.Push
2.Pop
3.Show
4.Exit
 Enter your choice 
3
The elements are : 
3
3
2

1.Push
2.Pop
3.Show
4.Exit
 Enter your choice 
2
1.Push
2.Pop
3.Show
4.Exit
 Enter your choice 
2
1.Push
2.Pop
3.Show
4.Exit
 Enter your choice 
2
1.Push
2.Pop
3.Show
4.Exit
 Enter your choice 
2
Underflow
1.Push
2.Pop
3.Show
4.Exit
 Enter your choice 
4
Exiting....

*/
