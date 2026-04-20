//Bruteforce approach

#include <stdio.h>
#include <stdlib.h>//for abs
int main() {
int n;
int count=0;
printf("Enter the value of the number:");
scanf("%d",&n);
int num=abs(n);
while(num>0){
    num/=10l;
    count+=1;
}
printf("%d",count);
}

//Optimal approach

#include <math.h>//for log10()
int main() {
int n;
printf("Enter the value of the number:");
scanf("%d",&n);
int num=abs(n);
int cnt=log10(num)+1;
printf("%d",cnt);
}