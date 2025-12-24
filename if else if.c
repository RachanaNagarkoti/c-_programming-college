#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("\nEnter three numbers:\t");
    scanf("%d %d %d",&n1,&n2,&n3);
    if (n1>n2 &&n1>n3){
        printf("\n%d is the larger number.",n1);
    }else if(n2>n1 && n2>n3){
        printf("\n%d is the largest numver.",n2);
    }else{
 printf("\n%d is the largest numver.",n3);
    }
    return 0;
}