#include<math.h>
#include<stdio.h>
int main (){
    int n,x,sum=0,i;
    printf("\n Enter the value of x");
    scanf("%d",&x);
    printf("\n Enter the value of n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if(i%2==0){
            sum=sum-pow(x,i);
        }
        else
        sum=sum+pow(x,i);
}
printf("Sum=%d",sum);
return 0;
}