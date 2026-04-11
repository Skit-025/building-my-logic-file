#include<stdio.h>
int pattern(int n){
    for(int i=0;i<n;i++){
        // for the spaces
        for(int j=0;j<(n-i);j++){
            printf(" ");
        }
        // for the stars
        for(int j=0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    // int n;
    // printf("Enter the value of the n:");
    // scanf("%d",&n);
    pattern(5);
    return 1;
}