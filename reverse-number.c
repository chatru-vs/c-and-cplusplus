#include <stdio.h>
int main()
{

   int n;
   int reversed_number = 0;
   int remainder;

   printf("enter the number: ");
   scanf("%d", &n);
   
   while(n != 0){
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
   }

   printf("Reversed Number = %d", reversed_number );
   return 0;
}





//   cout << "Enter an integer: ";
//   cin >> n;

//   while(n != 0) {
//     remainder = n % 10;
//     reversed_number = reversed_number * 10 + remainder;
//     n /= 10;
//   }

//   cout << "Reversed Number = " << reversed_number;

