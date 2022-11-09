/*INFIX TO POSTFIX so basically we have to convert this shit 'A +B' to 'AB+' help me ill die before program finishes :)*/
#include <stdio.h>
#include<string.h>
#include <ctype.h>
#define max 5 
char stack[max];
int top = -1;

void push(char c){
    if(top<max){
        top++;
        stack[top] = c;
    }
    else printf("OVERFLOW!");
}

char pop(){
    if (top != -1){
        char x = stack[top];
        top--;
        return x;
    }
    else return 0;
}

int priority(char x){
    if(x == '(') return 0;
    if(x == '^') return 1;
    if(x == '*' || x == '/' || x == '%') return 3;
    if(x == '+' || x == '-') return 2;
    return 0;
}

int main(){
    char x;
    char strin[100];
    printf("Enter the Infix Value : ");
    gets(strin);
    int i;
    for(i = 0; i < strlen(strin); i++){

        if(isalnum(strin[i])) printf("%c", strin[i]);

        else if(strin[i] == '(') push(strin[i]);

        else if(strin[i] == ')')
            while((x=pop()) != '(') printf("%c", x);

        else{
            while(priority(strin[i])<=priority(stack[top])) printf("%c", pop());
            push(strin[i]);
        }   
    }
    while(top != -1) printf("%c", pop());
    return 0;

}