# include <stdio.h>
void display(int n,int m,int B[n][m]){
    printf("The transpose of the matrix is: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
}
void main(){
    //initializing variables
    int m,n,i,j;
    //ask for the sizes of the matrix
    printf("enter the sizes for the matrixA[mxn] respectively: \n");
    scanf("%d%d",&m,&n);
    //declare the matrix
    int A[m][n],B[n][m];// B is the transpose of the matrix A
    // ask the values of the emlements of the matrix A
    printf("Enter the elements of matrix A[%dx%d]: \n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++){
            printf("A[%d][%d]:  ",i,j);
            scanf("%d",&A[i][j]);
            printf("\n");
        }
    }
    // writing the logic of Transpose
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            B[i][j]=A[j][i];
        }
    }
    //displaying the transposed matrix
    display(n,m,B);
}