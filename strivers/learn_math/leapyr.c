#include<stdio.h>
#include<stdbool.h>
bool leapYear(int n){
if(n<=0)return false;
else{
    if(n%400==0 || (n%4==0 & n%100!=0)){
        return true;
    }
    else{
        return false;
    }
}
}
int main(){
    int n;
    printf("Enter the year:");
    scanf("%d",&n);
    if(leapYear(n)!=false){
        printf("%d is a leap year",n);
    }
    else printf("%d is not a leap year",n);
    return 0;
}