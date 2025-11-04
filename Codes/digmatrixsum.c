#include <stdio.h>
int main(){
    //variable initialization
    int i,j,m,n,digsum=0;
    // ask for the number of rows and columns the matrix will have
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d",&m,&n);
    //initializing the matrix
    int A[m][n];
    //ask for the matrix elements
    printf("Enter the elements of the matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    //print the matrix
    printf("The matrix is: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    // logic for the sum of diagonal elements
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
                digsum+=A[i][j];
            }
        }
    }
    return printf("The sum of diagonal elements is: %d",digsum);
}