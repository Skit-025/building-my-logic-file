#include<stdio.h>

int pattern(int n){
    int num=65;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            char ch=(char) num;
            printf("%c",ch);
        }
        num++;
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