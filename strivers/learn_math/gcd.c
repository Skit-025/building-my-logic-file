#include<stdio.h>
int gcd(int m,int n){
    if(m==0||n==0){
        printf("GCD is:%d",m);
        return m;
    }
    else{
    while(n!=0){
        int temp=n;
        n=m%n;
        m=temp;
    }
    printf("GCD is:%d",m);
    return m;
}
}
int main(){
    int m,n;
    printf("Enter the value of m: ");
    scanf("%d",&m);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    gcd(m,n);
    return 0;
}