// DS Exp 1
#include<stdio.h>
void toh(int disc, int a, int b, int c){
    if(disc>0){
        toh(disc-1, a, c, b);
        printf("Moved from disc %d to %d \n", a, c);
        toh(disc-1, b, a, c);
    }
}

void main(){
    int disc, a = 1, b = 2, c = 3;
    printf("Enter the number of the discs\n");
    scanf("%d",&disc);
    toh(disc, a, b, c);
}