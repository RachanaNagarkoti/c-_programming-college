#include<stdio.h>
int main()
{
    int num1,num2,larger;
//     printf("\n a<b && a<c=>%d",(a<b && a<c));
// printf("\n a>b && b<c=>%d",(a>b && b<c));
// printf("\n a>b!! b<c=>%d",(a>b || b<c));
// printf("\n a>c!! b>c=>%d",(a>c || b>c));
// a=a+1;
// printf("\n a=%d",a);
// a+=1;
// printf("\n a=%d",a);
// x=a++;
// printf("\n x=%d a=%d",x,a);
// y=--b;
// printf("\n y=%d",y,b);
// y=b--;
// printf("\n y=%d b=%d",y,b);

printf("enter two numbers");
scanf("num1>=%d \t num2=%d",&num1,&num2);
larger =(num1>num2)?num1:num2;
printf("larger number between %d and %d is %d\n",num1,num2,larger);


return 0;
}