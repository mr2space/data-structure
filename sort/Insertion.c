#include<stdio.h>
int print(int num)
{
    printf(" %d \n", num);
    return 0;
}

int swap(int * num1,int * num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return 0;
}
int Insertion(int arr[],int arr_size){
    int i = 0;
    int j = 0;
    int  key = arr[1];
    for(i = 1;i<arr_size;i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        print(arr[j+1]);
    }

}



int inputArray(int arr[],int size){
    int i = 0;
    for(i = 0; i< size ;i++){
        scanf("%d",&arr[i]);
    }
    return i;
}

int printArray(int arr[],int size){
    int i = 0;
    for (i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
    return i;
}




int main(){
    int arr[7] = {0,24,2,45,23,22,1};
    printArray(arr,7);
    Insertion(arr,7);
    printArray(arr,7);
    return 0;
}