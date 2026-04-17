#include <stdio.h>
int pattern(int n){
for(int i=1;i<=n;i++){
    for(int j=0;j<i;j++){
        printf("*");
    }
    printf("\n");
}
for(int i=n-1;i>0;i--){
    for(int j=0;j<i;j++){
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
    return 0;
}