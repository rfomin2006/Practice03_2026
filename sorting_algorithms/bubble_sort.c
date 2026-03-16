#define ARR_SIZE 5

#include <stdio.h>
#include <string.h>

void print_array(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");    
}

int* bubble_sort(int* arr, int size) {
    static int stats[2] = {0, 0};
    int t = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            stats[0]++;
            if (arr[j] > arr[j + 1]) {
                t = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = t;
                stats[1]++;
            }
        }
    }
    return stats;
}

int main(void) {
    int array[ARR_SIZE] = {5, 1, 4, 2, 8};
    print_array(array, ARR_SIZE);
    int stats[2];
    memcpy(stats, bubble_sort(array, ARR_SIZE), sizeof(int)* 2);
    print_array(array, ARR_SIZE);
    printf("checks: %d\nswaps: %d", stats[0], stats[1]);
    return 0;
}