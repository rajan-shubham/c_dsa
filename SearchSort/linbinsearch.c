#include <stdio.h>

// Function to perform a linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index of the key if found
        }
    }
    return -1; // Return -1 if key is not found
}

// Function to perform a binary search
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == key) {
            return mid; // Return the index of the key if found
        }
        
        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int choice, key, result;

    do {
        printf("\nMenu:\n");
        printf("1. Linear Search\n");
        printf("2. Binary Search\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the key to search: ");
                scanf("%d", &key);
                result = linearSearch(arr, n, key);
                if (result != -1) {
                    printf("Key found at index: %d\n", result);
                } else {
                    printf("Key not found in the array.\n");
                }
                break;
            case 2:
                printf("Enter the key to search: ");
                scanf("%d", &key);
                result = binarySearch(arr, 0, n - 1, key);
                if (result != -1) {
                    printf("Key found at index: %d\n", result);
                } else {
                    printf("Key not found in the array.\n");
                }
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}
