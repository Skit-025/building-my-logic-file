// Online C compiler to run C program online
#include <stdio.h>
void pattern(int n){
    int size=2*n-1;
    int value;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                
                int top=i;
                int left=j;
                int right=size-j-1;
                int bottom=size-i-1;
                
                int min=top;
                if(left<top)min=left;
                if(right<top)min=right;
                if(bottom<top)min=bottom;
                
                value=n-min;
                printf("%d ",value);
            }
        printf("\n");
    }
    
}
int main() {
    int n;
    printf("Enter the number of levels you are having in the matrix:");
    scanf("%d",&n);
    pattern(n);
    return 0;
}