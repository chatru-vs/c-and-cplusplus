#include <stdio.h>

void checkChar(char str[], char ch);

int main(){

    char str[] = "Bhola";
    char ch = 'B';

   checkChar(str, ch);

    return 0;

}

void checkChar(char str[], char ch){
    for (int i = 0; str[i]!= '\0'; i++)
    {
        if (str[i] == ch){
            printf("charactor is present");
            return;
        }
    }
    
        printf("charactor is not present");
 
    

}