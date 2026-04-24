#include <stdio.h>

int gcd(int m,int n){
    while(n!=0){
        m=m%n;
        m=m^n;
        n=m^n;
        m=m^n;
    }
    // printf("GCD is:%d",m);
    return m;
}
int gcdThree(int m,int n,int p){
    return gcd(gcd(m,n),p);
}

int main() {
int m,n,p;
printf("Enter the value of m,n&p:");
scanf("%d,%d,%d",&m,&n,&p);
printf("Gcd is:%d",gcdThree(m,n,p));
}