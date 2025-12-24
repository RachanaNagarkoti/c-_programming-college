#include<stdio.h>
int main(){
    int n1,n2,n3,n4;
    float total,percentage;
    char grade;
    printf("\nEnter four numbers:\t");
    scanf("%d %d %d",&n1,&n2,&n3,&n4);
    total =n1+n2+n3+n4;
    percentage+(total/400)*100;
    grade='A';
    else if(percentage >=60)
    grade='B';
    else if(percentage >=50)
    grade='C';
    else if(percentage >=40)
    grade='D';
    else;
    grade='F';
        printf("\npercentage:%2f",percentage);
        printf("\ntotal:%c/n",grade);
    return 0;
}
