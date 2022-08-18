#include <stdio.h>

//scanf("%d", &marks[0]) => input
//printf("%d", marks[0]) = output

int main(){

    int marks[3];
    printf("please enter the phy marks: ");
    scanf("%d", &marks[0]);
    printf("please enter the chemistry marks :");
    scanf("%d", &marks[1]);
    printf("please enter the Maths marks :");
    scanf("%d", &marks[2]);

    printf("phy = %d & chemistry = %d & Maths = %d", marks[0], marks[1], marks[2]);

    return 0;
}