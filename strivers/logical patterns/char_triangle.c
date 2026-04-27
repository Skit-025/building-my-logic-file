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

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a=65;
    int k=a;
    int n=4;
    for(int i=0;i<=3;i++){
        for(int j=n-i-1;j>0;j--){
            printf(" ");
        }
        for(k=a;k<=a+i;k++){
            printf("%c",(char) k);
        }
        for(int l=k-2;l>=a;l--){
            printf("%c",(char) l);
        }
        printf("\n");
    }

    return 0;
}