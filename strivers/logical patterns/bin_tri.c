#include <stdio.h>
int pattern(int n){
    int num;
for(int i=1;i<=n;i++){
    if(i%2!=0){
        num=1;
    }
    else{
        num=0;
    }
    for(int j=0;j<i;j++){
        printf("%d",num);
        num^=1;
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