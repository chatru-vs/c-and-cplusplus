#include <stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main(){
    int a = 3;
    int b = 5;
    int sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);

    printf("sum = %d & prod = %d & avg %d \n", sum, prod, avg);
    printf("sum = %u & prod = %u & avg %u \n", &sum, &prod, &avg);
    

    
    return 0;
}

// a and b => call by value
// sum, prod, avg = call by reference
void doWork(int a, int b, int *sum, int *prod, int *avg){

*sum = a+b;
*prod = a * b;
*avg = (a+b)/2;

printf("sum = %d & prod = %d & avg %d \n", *sum, *prod, *avg);


}
