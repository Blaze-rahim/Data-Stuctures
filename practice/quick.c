#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int array[], int low, int high){
    int pivot = array[low];
    int i = low + 1;
    int j = high;
    printf("%d\n", pivot);

    while (i <= j){
        while (i < j && array[i] < pivot){
            i++;
        }
        while (array[j] > pivot){
            j--;
        }
        if (i < j){
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[low], &array[j]);

    return j;
}

void quicksort(int array[], int low, int high){
    if (low < high){
        int mid = partition(array, low, high);
        quicksort(array, low, mid - 1);
        quicksort(array, mid + 1, high);
    }
}

void printarray(int array[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d\n", array[i]);
}

int main(){
    int array[] = {2, 4, 6, 3, 7};
    int n = sizeof(array) / sizeof(array[0]);
    printf("%d\n", n);
    quicksort(array, 0, n - 1);
    printf("sorted in ascending order");
    printarray(array, n);
    return 0;
}