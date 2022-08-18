#include <stdio.h>


int countOdd(int arr[], int n);

int main(){

int arr[] = {1,2,3,4,5,6,7,8};
printf("%d", countOdd(arr, 8));




    return 0;
}

int countOdd(int arr[], int n){

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ( arr[i] % 2 != 0)
        {
            count ++;
            
        }
        
    }
    return count;

}


/* int marks[3][3];
   marks[0][1] = 90;
   marks[0][2]= 80;
   marks[0][3]= 75;

   marks[1][1] = 10;
   marks[1][2]= 20;
   marks[1][3]= 35;

   marks[2][1] = 40;
   marks[2][2]= 50;
   marks[3][3]= 65;

   printf("%d \n", marks[3][3]);
   printf("%d\n", marks[0][3]);
   printf("%d\n", marks[1][2]);

   */