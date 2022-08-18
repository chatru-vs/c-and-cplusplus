#include <stdio.h>
void squire(int n);
void _squire(int* n);


int main(){

    int number = 4;
    squire(number);
   
   _squire(&number);
    

    return 0;
}

void squire(int n){
    n = n * n;
    printf("%d", n);
    
}

void _squire(int* n){
    *n = (*n) * (*n);
    printf("%d", *n);
}