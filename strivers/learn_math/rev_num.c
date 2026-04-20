// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int reverse(int n){
int num=n;
int rev_num=0;
while(num>0){
    int dig=num%10;
    rev_num=rev_num*10+dig;
    num/=10;
}
printf("%d",rev_num);
return rev_num;
}

int main() {
int n;
printf("Enter the value of the number:");
scanf("%d",&n);
reverse(n);
}