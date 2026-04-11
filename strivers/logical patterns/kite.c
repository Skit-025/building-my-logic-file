#include <stdio.h>
int pattern(int n){
for(int i=1;i<=n;i++){
    for(int j=0;j<n-i;j++){
        printf(" ");
    }
    for(int k=(2*i)-1;k>0;k--){
        printf("*");
    }
    printf("\n");
}
for(int i=n;i>0;i--){
    for(int j=0;j<n-i;j++){
        printf(" ");
    }
    for(int k=(2*i)-1;k>0;k--){
        printf("*");
    }
    printf("\n");
}
}
int main(){
    int n;
    printf("Enther the value of n:");
    scanf("%d",&n);
    pattern(n);
    return 1;
}