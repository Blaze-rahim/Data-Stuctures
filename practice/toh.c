#include <stdio.h>
void toh(int n, int a, int b, int c){
    if(n>0){
        toh(n-1, a, c, b);
        printf("The thing movied from %d to %d\n" , a, c);
        toh(n-1,b , a, c);
    }
}
int main(){
    int a=1,b=2,c=3;
    toh(3,a,b,c);
}