#include <stdio.h>
#include<stdlib.h>
//fopen parameter = "r", "rb", "w", "wb", "a"  ||  fgetc fputc fprintf fscanf

int main()
{

int n;
printf("please enter the number: ");
// scanf("%d", &n);
int *ptr;
ptr =(int *)(calloc(5, sizeof(int)));

ptr[0] = 1;
ptr[1] = 2;
ptr[2] = 3;
ptr[3] = 4;
ptr[4] = 5;
for (int i = 0; i < 5; i++)
{
    printf("%d \t", ptr[i]);
}
ptr = realloc(ptr, 6);
ptr[0] = 1;
ptr[1] = 2;
ptr[2] = 3;
ptr[3] = 4;
ptr[4] = 5;
ptr[5] = 6;

for (int i = 0; i < 6; i++)
{
    printf("%d \t", ptr[i]);
}

free(ptr);
// float *fptr;
// fptr = (float *) calloc(5, sizeof(float));
// // fptr[0] =1.0;
// // fptr[1] =2.0;
// // fptr[2] =3.0;
// // fptr[3] =4.0;
// // fptr[4] =5.0;

// for (int i = 0; i < n; i++)
// {
// printf("%f", fptr[i]);
// }





return 0;

}

