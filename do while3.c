#include<stdio.h>
int main(){
    int num,rev=0;
    int digit;

    printf("\n Enter number to be reversed :\t");
        scanf("%d",&num);
        while(num!=0)
        {
            digit=num%10;
            rev=rev*10+digit;
            num=num/10;
        }
        printf("\n The reverse number is :%d",rev);
        return 0;

}