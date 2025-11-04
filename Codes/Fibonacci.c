#include <stdio.h>
int main(){
    //Variable initialization
    int a=0, b=1,n,temp=0, i;
    //ask for the size of the Fibonacci series
    printf("Enter the size of Fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci Series: \n");
    //print Fibonacci series
    printf("%d,%d", a,b);
    //logic to get the fibonacci series
    for(i=0;i<n;i++){
        temp=(a+b);
        printf(",%d", temp);
        a=b;
        b=temp;
    }
}