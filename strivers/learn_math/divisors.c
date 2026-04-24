#include<stdio.h>
#define MAX 100
int arr[MAX];
int k=0;
void divisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            arr[k]=i;
            k+=1;
            if(k==100)break;
        }
        
    }
    for(int i=0;i<k;i++){
printf("%d ",arr[i]);
        }

    }

void main(){
    int n;
    printf("Enter the number you want divisors of :");
    scanf("%d",&n);
 divisors(n);
}