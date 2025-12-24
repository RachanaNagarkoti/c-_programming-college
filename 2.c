#include <stdio.h>
int main(){
    int num1=134;
    int num2=234;
    int AND,OR,XOR;
    AND=num1 &num2;
    OR=num1 |num2;
    XOR=num1^num2;
    printf("AND=>%d\n",AND);
    printf("OR=>%d\n",OR);
    printf("XOR=>%D\n",XOR);
    return 0;


}