#include <stdio.h>

void printString(char arr[]);

int main(){

    char firstName[] = "Chatrughan";
    char lastName[] = "Prasad";

    printString(firstName);
    printString(lastName);

}

void printString(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");


}