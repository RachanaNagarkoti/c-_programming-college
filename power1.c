#include<stdio.h>
int main() {
    int num,rev=0;
    int digit;
    printf("\n Enter number to be reversed:\t");
    scanf("%d",&num);
    if(num>=1000 && num<=9999){
    while(num!=0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    printf("\n Enter ")
}