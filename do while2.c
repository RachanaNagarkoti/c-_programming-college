#include<stdio.h>
int main(){
    int fib1,fib2,prev,next,num;
    fib1=1;
    fib2=1;
    prev=fib1;
    printf("\nEnter the number of terms for fibonaci sequence:\t");
    scanf("%d",&num);
    printf("%d",fib1);
    do{
        next=fib2+prev;
        prev=fib2;
        fib2=next;
        printf("%d",prev);
}while(num>next);
return 0;
}