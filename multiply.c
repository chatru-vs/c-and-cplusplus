#include <stdio.h>

int multiply(int a, int b);

int main(){

    int a;
    int b;
    printf("please enter the first number\n");
    scanf("%d", &a);
    printf("please enter the second number \n");
    scanf("%d", &b);

    int result = a * b;
    printf("muliply %d" , result);      

    return 0;
}

int multiply(int a, int b){
    return a * b;
}