#include <stdio.h>
void partition(int a[], int lb, int up, int p, int n) {
    int left[n], right[n];
    int leftsize = 0, rightsize = 0;
    int i;

    // Splitting elements into left and right of pivot
    for (i = lb; i <= up; i++) {
        if (a[i] < p) {
            left[leftsize++] = a[i];
        } else if (a[i] > p) {
            right[rightsize++] = a[i];
        }
    }

    // Copying elements back to the original array
    for (i = 0; i < leftsize; i++) {
        a[lb + i] = left[i];
    }
    a[lb + leftsize] = p;
    for (i = 0; i < rightsize; i++) {
        a[lb + leftsize + 1 + i] = right[i];
    }
}

int partition_lomuto(int a[], int lb, int up) {
    int pivot = a[up]; 
    int i = lb - 1;
    int j;
    for ( j = lb; j < up; j++) {
        if (a[j] <= pivot) {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int temp = a[i + 1];
    a[i + 1] = a[up];
    a[up] = temp;
    return i + 1;
}

void quicksort(int a[], int lb, int up) {
    if (lb < up) {
    	
        int loc = partition_lomuto(a, lb, up);
        
        quicksort(a, lb, loc - 1); 
        quicksort(a, loc + 1, up);
    }
}

int main() {
    int size, i;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int a[size];
    printf("Enter elements of array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, size - 1);

    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}