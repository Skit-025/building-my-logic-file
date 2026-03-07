#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=i-1;k++){
            printf(" ");
        }
        for(j=1;j<=(n+1-i);j++){
            printf("* ");
        }
        printf("\n");
    }
}