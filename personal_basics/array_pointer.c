#include<stdio.h>

void point(int *ptr ,int size){
    // int *ptr = arr;
    for (int i = 0; i <= size; i++){
        ptr[i] = ptr[i] + 1;
    }
}

int main(){
    printf("hello world\n");
    int size = 5;
    int arr[] = {1, 2, 3, 4, 5};
    point(arr, size);
    while(size --> 0){
        printf("\t%d" , arr[size]);
    }
    return 0;
}