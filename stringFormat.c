#include <stdio.h>
#include <string.h>

int countLength(char arr[]);
void slice(char str[], int n, int m);
int main(){

//    char str[100];
//    gets(str);  // input multiple string
//     fgets(str, 100, stdin);
//    puts(str);  // output multiple string

// char *canChange = "Hello Sring"; // store string in pointer array
// puts(canChange);
// canChange = "hello";
// puts(canChange);



// char cannotchange[] = "cannot change";
// puts(cannotchange);
// char name[100] = "chatrughan";
// int lenght = strnlen(name);
// // fgets(name, 100, stdin);
// printf("lenth is %d", strlen(lenght));
// char firstString[] = "Apple";
// char secondStirng[] = "Banana";
// char newName[200];
// printf("difference %d", strcmp(firstString, secondStirng));
// printf("copy", strcpy(newName, firstString));
// strcat(newName, firstString);
// puts(newName);

char str[] = "Helloworld";
slice(str, 3, 6);

return 0; 
}

// int countLength(char arr[]){
//     int count = 0;
//     for (int i = 0; arr[i] != 0; i++)
//     {
//         printf("%c", arr[i]);
//         count++;
//     }
//     return count -1;
    
// }

void slice(char str[], int n, int m){
    char newstr[100];
    int j =0;
for (int i = n; i <= m; i++, j++)
{
    newstr[j] = str[i];
}
newstr[j]= '\0';
puts(newstr);

}