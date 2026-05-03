#include<stdio.h>
#include<stdbool.h>
bool specialno(int n){

}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int k=specialno(n);
    if(k!=true){
        printf("%d is not a special number",n);
    }
    return 0;

}