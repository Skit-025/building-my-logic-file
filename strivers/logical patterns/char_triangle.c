#include<stdio.h>

int pattern(int n){
    for(int i=1;i<=n;i++){
        int num=65;
        for (int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            char ch=(char) num;
            printf("%c",ch);
            num++;
        }
        num-=2;
        for(int m=0;m<i-1;m++){
            printf("%c",(char) num);
            num--;
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