#include<stdio.h>
#define max 5
int main(){
    int number[max],key,i,flag=0;
    for (i=0;i<max;i++)
    {
        printf("\n enter the %d th element of array:",i+1);
    scanf("%d",&number[i]);

}

printf("\n enter the key elements:");
scanf("%d",&key);
for(i=0;i<max;i++)
{
    if(key==number[i]){
        flag=1;
        break;
    }
    else
    flag=0;
}
if (flag==1)
printf("\n%d was found at position %d",key,i+1);
else
printf("\n%d was not found",key);
return 0;
}