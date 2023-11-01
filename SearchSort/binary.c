#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x);
int main(){
	int arr[] = { 5, 2, 1, 11, 50 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 1;
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? printf("Element is not present"
							" in array")
				: printf("Element is present at "
							"index %d",
							result);
	return 0;
}
int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		if (arr[m] == x)
			return m;

		if (arr[m] < x)
			l = m + 1;

		else
			r = m - 1;
	}

	return -1;
}