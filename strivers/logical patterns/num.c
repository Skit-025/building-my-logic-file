#include<stdio.h>

int pattern(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",num);
            num+=1;
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