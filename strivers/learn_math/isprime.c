#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isPrime(int n){
    if(n<=1){
        // printf("You are giving invalid inputs to check");
        return false;
    }
    else if(n==2){
        return true;
    }
    else{
        for(int i=1;i<(int) sqrt(n);i++){
            if(n%i==0){
                return false;
            }
            else{
                return true;
            }
        }
    }
return true;
}
void main(){
    int n;
    printf("Enter the number you wanna check:");
    scanf("%d",&n);
    if(isPrime(n)){
        printf("%d is a prime number.");
    }
    else printf("%d is not prime.");
}