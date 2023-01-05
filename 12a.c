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
        printN(n-1);
        printf(" %d",n);
    }
}

/*#include<stdio.h>
void printN(int);

void printN(int n)
{
    if(n==0)
        return;
    printN(n-1);
}
int main(){
    int n;
    n=10;
    printN(n);
    return 0;
}
*/