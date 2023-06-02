#include <stdio.h>

void changeMax(int arr[], int n) {
    int max1 = arr[0]; 
    int max2 = arr[0]; 
    int max1_index = 0; 
    int max2_index = 0; 


    for (int i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max2_index = max1_index;
            max1 = arr[i];
            max1_index = i;
        } else if (arr[i] > max2) {
            max2 = arr[i];
            max2_index = i;
        }
    }

     
    int temp = arr[max1_index];
    arr[max1_index] = arr[max2_index];
    arr[max2_index] = temp;
}

int main() {
    int arr[] = {3, 2, 1, 4, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Исходный массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    changeMax(arr, n);

    printf("Измененный массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}