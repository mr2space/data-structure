#include<stdio.h>
#include "../Array/array.c"

int Bubble(int arr[],int arr_size){
    int i = 0;
    int j = 0;

    for(i=0;i<arr_size;i++){
        for(j=0;j<arr_size-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[7] = {0, 24, 2, 45, 23, 22, 9};
    printArray(arr, 7);
    Bubble(arr, 7);
    printArray(arr, 7);
    return 0;
    return 0;
}