#include<stdio.h>
int pattern(int n){
    for(int i=0;i<5;i++){
        for(int j=0;j<n-i;j++){
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
    return 0;
}