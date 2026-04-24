#include<stdio.h>
bool amstrong(int n){
    int num=n;
    int digit;
    int sum=0;
    while(num>0){
        digit=num%10;
        sum+=(digit*digit*digit);
        num/=10;
    }
    if(sum==n){
        printf("%d is an amstrong number..",n);
        return sum==n;
    }
    else{
        return sum==n;
    }
}
void main(){
    int n;
    printf("Enter the number you wanna check:");
    scanf("%d",&n);
    amstrong(n);
}