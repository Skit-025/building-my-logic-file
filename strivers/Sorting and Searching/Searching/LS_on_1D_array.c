#include <stdio.h>

int ls1D(int A[], int size, int key) {
    for(int i=0;i<size;i++){
        if(A[i]==key){
            return i;
        }
    }
    return -1;
}

int main() {
    int size, key;

    printf("Enter size: ");
    scanf("%d", &size);

    int A[size]; //

    printf("Enter  elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter target: ");
    scanf("%d", &key);

    int result = ls1D(A, size, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}