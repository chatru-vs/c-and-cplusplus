#include <stdio.h>

void reverseOrder(int arr[], int n);
void printReverseOrder(int arr[], int n);

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    reverseOrder(arr, 5);
    printReverseOrder(arr, 5);
    return 0;
}

void printReverseOrder(int arr[], int n)
{
    for (int i = 0; i < 5; i++)
    { 
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void reverseOrder(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstValue = arr[i];
        int secondValue = arr[n - i - 1];
        arr[i] = secondValue;
        arr[n - i - 1] = firstValue;
    }
}