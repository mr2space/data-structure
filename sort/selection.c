#include<stdio.h>
#include "../Array/array.c"
int selection(int arr[],int arr_size){
    int i = 0;
    int j = 0;
    int minI = 0;
    int min = arr[i];
    for(i = 0;i<arr_size-1;i++){
        min = arr[i];
        minI = i;
        for(j=i+1;j<arr_size;j++){
            if(min>arr[j]){
                min = arr[j];
                minI = j;
            }
        }
        if(i!=minI){
            swap(&arr[i],&arr[minI]);
        }
    }
}

int main(){
    int arr[7] = {0, 24, 2, 45, 23, 22, 1};
    printArray(arr, 7);
    selection(arr, 7);
    printArray(arr, 7);
    return 0;
}