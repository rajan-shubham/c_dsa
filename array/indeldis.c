#include<stdio.h>
#define max_size 50

int insertElement(int arr[], int size, int element,int position){
	if(size == max_size){
		printf("Array is full. Cannot insert more elements.\n");
		return size;
		}
	if(position < 0 || position > size){
		printf("Invalid position. Position should be b/w 0 and %d (inclusive).\n",size);
		return size;
		}
	for(int i= size-1;i>=position;i--){
		arr[i+1] = arr[i];
		}
	arr[position]=element;
	return size+1;
}

int deleteElement(int arr[], int size,int position){
	if(size == 0){
		printf("Array is empty. Cannot delete an element.\n");
		return size;
		}
	if(position < 0 || position > size){
		printf("Invalid position. Position should be b/w 0 and %d (inclusive).\n",size);
		return size;
		}
	for(int i=position;i<size-1;i++){
		arr[i] = arr[i+1];
		}
		return size-1;
}

void displayArray(int arr[],int size){
	if(size == 0){
		printf("Array is empty.\n");
	}else{
		printf("Array elements: ");
		for(int i=0;i<size;i++){
			printf("%d ",arr[i]);
			}
			printf("\n");
		}
}

void main(){
	int arr[20] = {1,2,3,4,5};
	displayArray(arr,5);
	insertElement(arr,5,10,1);
	displayArray(arr,6);
	deleteElement(arr,6,2);
	displayArray(arr,5);
	}
