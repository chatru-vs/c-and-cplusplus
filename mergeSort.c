#include <stdio.h>

void merge(int a[], int b[], int c[], int m, int n,){


    int i, j, k;
    i = j = k =0;
    while (i < m && j < n){
       if (a[i] < b[j]){
        c[k] = a[i];
        i++, k++; 
       }
       else{
        c[k] = b[j];
        j++, k++;
       }
    }

    while(i < m){
        c[k] = a[i];
        i++, k++;
    }

    while(i < m)
}

int main(){
    (j < n){
        c[k] = b[j];
        k++, j++;

    }
    


    return 0;
}