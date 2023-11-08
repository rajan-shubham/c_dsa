#include<stdio.h>
void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void main(){
    int i,j,n,min;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d element of Array : ",n);
    for(int k = 0;k < n;k++){
        scanf("%d",&a[k]);
    }
    for(i=0;i<n-1;i++){
    min = i;
    for(j=i+1;j<n;j++){
        if(a[j] < a[min]){
            min = j;
        }
    }
    if(min != i){
        swap(&a[i],&a[min]);
    }
}   
    printf("the sorted array is : ");
    for(int x = 0;x < n;x++){
        printf("%d ",a[x]);
    }
}