#include<stdio.h>
//diplay
int display(int m,int p,int C[m][p]){
        for(int i=0;i<m;i++){
            for(int j=0;j<p;j++){
                printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
        return 0;
}
int main(){
    //iniutializing all the vartiables are going to be used
    int m,n,p,k,i,j;
    // ask for their values as per the requirement
    printf("we are considering two matices so for now A[m][n] &B[n][p]\n");
    printf("Enter the value of m: \n");
    scanf("%d",&m);
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    printf("Enter the value of p: \n");
    scanf("%d",&p);

    //check for the values gotten or not printf("%d%d%d",m,n,p);
    //declare the matrices
    int A[m][n],B[n][p],C[m][p];
    //ask for the values to matrix
    printf("Enter the values to matrix A[%dx%d] \n",m,n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("A[%d][%d]: \n",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    //Geting the value of matrix B
    printf("Enter the elements to matrix B[%dx%d]: \n",n,p);
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            printf("B[%d][%d]: \n",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    //writing the multiplication logic
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            C[i][j]=0;
            for(k=0;k<n;k++){
            C[i][j]+=A[i][k]*B[k][j];
                
            }
        }
    }
display(m,p,C);
return 1;
}
