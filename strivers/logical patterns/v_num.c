#include<stdio.h>

int pattern(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int s=0;s<2*(n-(i+1));s++){
        printf(" ");
        }
        for(int k=i;k>0;k--){
            printf("%d",k);
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter the value of the n: ");
    scanf("%d",&n);
    pattern(n);
return 0;
}