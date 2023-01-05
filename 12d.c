#include<stdio.h>
void printN(int);
int main(){

    printN(10);
    printf("\n");
    return 0;
}
void printN(int n){
    if(n>0)
    {
        printf(" %d",2*n-1);
        printN(n-1);
        
    }
}
