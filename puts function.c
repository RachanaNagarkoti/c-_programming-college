#include<stdio.h>
int main(){
    char name[20];
    printf("Enter your name:");
    gets(name);
    printf("your name is:");
    puts(name);
    return 0;
}