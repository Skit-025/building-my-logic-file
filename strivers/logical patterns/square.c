#include <stdio.h>
//for standard input output
int square(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("*");
    }
    printf("\n");
}
}
int main(){
    int n;
    printf("Enther the value of n: ");
    scanf("%d",&n);
    square(n);
    return 0;
}