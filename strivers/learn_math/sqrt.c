//logic to find square root
#include<stdio.h>
#include<math.h>
double squareRoot(int n){
    if(n<0)return -1;
    if(n==0 || n==1)return n;
    else{
        double x=n;
        double y=0;
        while(x!=y){
            y=x;
            x=(x+n/x)/2;
}return x;
    }
}
int main(){
    double n;
    printf("Enter the +ve number you want squareroot of:");
    scanf("%lf",&n);
    double sqt=squareRoot(n);
    printf("the square root of %lf is %lf",n,sqt);
    return 0;
}