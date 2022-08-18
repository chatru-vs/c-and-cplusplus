#include <stdio.h>

int main(){
    int adhar[5];

    int *ptr = &adhar[0];

    for (int i = 0; i < 5; i++)
    {
        printf("plese enter the index number %d ", i + 1);
        scanf("%d", (ptr + i));
    }

    for (int i = 0; i < 5; i++)
    {
        printf(" %d index %d\n", i + 1, *(ptr + i));
    }
    
    


        
    

    return 0;
}