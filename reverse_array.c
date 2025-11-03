#include <stdio.h>/*
void main(){

    //initilise variables
    int size, i,k;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    //declaring the arrays
    int arr[size],rev_arr[size];
    //Enter the values to the array
    printf("Enter the elements of the array: \n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    //reverse logic
    for(i=(size-1),k=0;i>=0;i--,k++){
        rev_arr[k]=arr[i];
    }
    //displaying the reversed array
    printf("The reversed array is: \n");
    for(i=0;i<size;i++){
        printf("%d\t",rev_arr[i]);
    }
}*/
void main(){

    //initilise variables
    int size, i;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    //declaring the array
    int arr[size];
    //Enter the values to the array
    printf("Enter the elements of the array: \n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    //reverse logic and displaying the reversed array
    printf("The reversed array is: \n");
    for(i=(size-1);i>=0;i--){
        printf("%d\t",arr[i]);
    }
}