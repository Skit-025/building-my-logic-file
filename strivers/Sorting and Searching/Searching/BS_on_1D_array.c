#include <stdio.h>

int bs1D(int A[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (A[mid] == key) {
            return mid;
        } else if (A[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int size, key;

    printf("Enter size: ");
    scanf("%d", &size);

    int A[size]; // assume small size

    printf("Enter sorted elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter target: ");
    scanf("%d", &key);

    int result = bs1D(A, size, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
// useing recursion
int bs1D(int A[],int low, int high, int key) {
    if(low>high){
        return -1;
        //base  case
    }
    int mid = low + (high - low) / 2;

        if (A[mid] == key) {
            return mid;
        }
        else if (A[mid] > key) {
            return(A,low,mid-1,key);
        } else {
            return(A,mid+1,low,key);
            low = mid + 1;
        }
    
    return -1;
}
int main() {
    int size, key;

    printf("Enter size: ");
    scanf("%d", &size);

    int A[size];

    printf("Enter sorted elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter target: ");
    scanf("%d", &key);

    int result = bs1D(A,0,size-1, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}