/*

   *
  * *
 * * *
* * * *

*/

#include<stdio.h>
int main(){
    int n;
    int i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
for(i=1;i<=n;i++){
    for(k=1;k<=n-i;k++){
        printf(" ");
    }
    for(j=1;j<=i;j++){
    
        printf("* ");

        }
    printf("\n");
}

    return 0;
}