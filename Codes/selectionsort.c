# include <stdio.h>
# include <stdlib.h>

int selectionSort(int A[],int size){
    int min ,i,j,temp;
    for(i=0;i<size-1;i++){
        min i;
        for(j=i+1;j<size;j++){
            if(A[j]<A[min]){
                min=j;
            }
            }
    temp=A[min];
    A[min]=A[i];
    A[i]=temp;

            }
        }