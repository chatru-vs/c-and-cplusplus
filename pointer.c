#include <stdio.h>
void square(int n);
void _squire (int* n);  // storing address of n

int main(){

   

   int number = 4;
   square(number);
     
   _squire(&number);
    printf("%d\n", number);
    return 0;
}

void square(int n){
    n = n * n;
    printf("%d\n",  n);
}

void _squire(int* n){
    *n = (*n) * (*n);
    printf("%d", *n);
}

//