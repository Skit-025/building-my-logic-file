#include<stdio.h>
void pattern(int n){
    int num=69;
    for(int i=0;i<n;i++){
    for(int j=i;j>=0;j--){
        printf("%c",(char) num-j);
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