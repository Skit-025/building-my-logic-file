#include<stdio.h>
int main(){
    //initialize variables goint to be used
    int size,count=0,number,i;
    // ask for the array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    //Declare the array
    int arr[size];
    //ask for the elements of the array
    printf("Enter the elements of the array: \n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

//print the array
    printf("the array elements are: \n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    //Asking the number which frequency is to be found
    printf("\nEnter the number to find its frequency: ");
    scanf("%d",&number);
    //logic to find the frequency of the number
    for(i=0;i<size;i++){
        if(arr[i]==number){
            count++;
        }
        
}
return printf("The frequency of the number is:%d",count);
}