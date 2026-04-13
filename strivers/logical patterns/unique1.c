#include<stdio.h>
void pattern(int n){
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            printf("*");
    }
    for(int s=0;s<2*(n-i);s++)
    {
        printf(" ");
    }
    for(int star=0;star<i;star++){
        printf("*");
    }
    printf("\n");
    }

    // alternate structure

    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("*");
    }
    for(int s=0;s<2*(n-i);s++)
    {
        printf(" ");
    }
    for(int star=0;star<i;star++){
        printf("*");
    }
    printf("\n");
    }
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    pattern(n);
    return 0;
}