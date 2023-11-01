#include <stdio.h>

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap arr[i] and arr[min_index]
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to perform Cycle Sort
void cycleSort(int arr[], int n) {
    for (int cycle_start = 0; cycle_start < n - 1; cycle_start++) {
        int item = arr[cycle_start];
        int pos = cycle_start;
        for (int i = cycle_start + 1; i < n; i++) {
            if (arr[i] < item) {
                pos++;
            }
        }
        if (pos == cycle_start) {
            continue;
        }
        while (item == arr[pos]) {
            pos++;
        }
        if (pos != cycle_start) {
            int temp = item;
            item = arr[pos];
            arr[pos] = temp;
        }
        while (pos != cycle_start) {
            pos = cycle_start;
            for (int i = cycle_start + 1; i < n; i++) {
                if (arr[i] < item) {
                    pos++;
                }
            }
            while (item == arr[pos]) {
                pos++;
            }
            if (item != arr[pos]) {
                int temp = item;
                item = arr[pos];
                arr[pos] = temp;
            }
        }
    }
}

// Function to partition the array for Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Swap arr[i+1] and arr[high] (or the pivot)
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

// Function to perform Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
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

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Bubble Sort\n");
        printf("2. Selection Sort\n");
        printf("3. Insertion Sort\n");
        printf("4. Cycle Sort\n");
        printf("5. Quick Sort\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        int tempArray[n]; // Create a temporary array for each sort operation

        switch (choice) {
            case 1:
                for (int i = 0; i < n; i++) {
                    tempArray[i] = arr[i];
                }
                bubbleSort(tempArray, n);
                printf("Bubble Sorted Array: ");
                printArray(tempArray, n);
                break;
            case 2:
                for (int i = 0; i < n; i++) {
                    tempArray[i] = arr[i];
                }
                selectionSort(tempArray, n);
                printf("Selection Sorted Array: ");
                printArray(tempArray, n);
                break;
            case 3:
                for (int i = 0; i < n; i++) {
                    tempArray[i] = arr[i];
                }
                insertionSort(tempArray, n);
                printf("Insertion Sorted Array: ");
                printArray(tempArray, n);
                break;
            case 4:
                for (int i = 0; i < n; i++) {
                    tempArray[i] = arr[i];
                }
                cycleSort(tempArray, n);
                printf("Cycle Sorted Array: ");
                printArray(tempArray, n);
                break;
            case 5:
                for (int i = 0; i < n; i++) {
                    tempArray[i] = arr[i];
                }
                quickSort(tempArray, 0, n - 1);
                printf("Quick Sorted Array: ");
                printArray(tempArray, n);
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    } while (choice != 6);

    return 0;
}
