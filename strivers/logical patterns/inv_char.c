#include<stdio.h>

int pattern(int n){
    for(int i=0;i<n;i++){
        int num=65;
        for(int j=n;j>i;j--){
            char ch=(char) num;
            printf("%c",ch);
            num++;
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter the value of the n: ");
    scanf("%d",&n);
    pattern(n);
return 1;
}