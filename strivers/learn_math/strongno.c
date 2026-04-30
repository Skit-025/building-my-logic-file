// A number is said to strong number if the sum of the factorial of its digits is equal to then number itself
#include <stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
        fact*=i;
    }
    return fact;
}
int pattern(int n){
    int num=n;
    int sum=0;
while(num>0){
    int dig=num%10;
    sum+=factorial(dig);
    num/=10;
}
return sum;
    }
int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int number=pattern(n);
    if(number==n){
    printf("%d is a strong number",n);
    return 0;
}
else{
    printf("%d is not a strong number",n);
}
}