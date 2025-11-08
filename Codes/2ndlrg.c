#include <stdio.h>
int maine(){
    //initialize variables
    int largest=0, second_largest=0, size, i;
    //ask for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int A[size],B[size-1];
    //asking for the elements of thge array
    printf("Enter the elements of the array: \n");
    for(i=0;i<size;i++){
        scanf("%d",&A[i]);
    }
    //largest element finding logic
    for(i=0;i<size;i++){
        if(A[i]>=largest){
            largest=A[i];
        }
    }
    printf("The largest element is: %d\n",largest);
    //eleminate the largest element from the array and find the second largest
    for(i=0;i<size;i++){
        if(A[i]<largest){
            B[i]=A[i];
    }
}
    //2nd largest finding
    for(i=0;i<size-1;i++){
        if(B[i]>=second_largest){
            second_largest=B[i];
        }
    }

    printf("The second largest element is: %d\n",second_largest);
    return 0;
}
