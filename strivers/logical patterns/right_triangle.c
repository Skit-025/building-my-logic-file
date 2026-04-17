#include <stdio.h>
int pattern(int n){
    for(int i=0;i<n;i++){
for(int j=0;j<=i;j++){
    printf("*");
}printf("\n");
    }
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("\n%d",&n);
    pattern(n);
return 0;
}